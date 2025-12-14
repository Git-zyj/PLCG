/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125879
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                for (signed char i_3 = 2; i_3 < 23; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */short) ((signed char) (-(((/* implicit */int) arr_7 [i_0])))));
                        /* LoopSeq 4 */
                        for (unsigned char i_4 = 4; i_4 < 23; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned int) var_17);
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_7 [i_0]))) || (((/* implicit */_Bool) ((arr_13 [i_2 - 2] [i_2] [i_2] [i_2] [i_2]) | (arr_13 [i_2 + 2] [i_2] [i_2] [i_2] [i_2]))))));
                            arr_15 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) arr_1 [i_1] [i_2])))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) arr_5 [i_4] [i_1] [i_2])))))) < ((+(var_15)))))) : (((((/* implicit */_Bool) arr_11 [i_0])) ? (arr_13 [i_4] [i_4 - 2] [i_4] [i_4] [i_0 - 1]) : (((/* implicit */int) arr_11 [i_0]))))));
                            var_23 = (!(((/* implicit */_Bool) (+((+(var_5)))))));
                            arr_16 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */long long int) 4279799991U)) : (3948972852140866912LL)))) >= (min((var_0), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2])))))) ? (((/* implicit */int) arr_5 [i_2] [i_4] [i_2])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            var_24 = ((/* implicit */signed char) ((((410536275417328467ULL) ^ (((/* implicit */unsigned long long int) 1025462866449228423LL)))) >> (((((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0])) - (149)))));
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (+(var_17))))));
                            var_26 = ((/* implicit */short) var_6);
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0 - 1])) < (((/* implicit */int) arr_9 [i_0 - 3] [i_0] [i_2 - 2] [i_2]))));
                            arr_19 [i_0] [i_1] [i_2] [i_0] [i_5] = ((/* implicit */long long int) var_6);
                        }
                        for (int i_6 = 1; i_6 < 22; i_6 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */int) arr_21 [i_0] [i_0]);
                            var_29 = ((/* implicit */unsigned char) (+(min((arr_18 [i_3] [i_3] [i_3 - 1] [i_3] [i_6]), (arr_13 [i_0] [i_1] [i_3 - 2] [i_3] [i_6])))));
                            var_30 = ((((/* implicit */int) (unsigned short)24452)) | (((/* implicit */int) (unsigned short)41073)));
                            arr_23 [i_0] [i_0] [i_2] [i_0] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */int) arr_1 [i_6] [i_1])) | (((/* implicit */int) var_14))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1] [i_2]))))) : (var_8)));
                        }
                        for (int i_7 = 1; i_7 < 22; i_7 += 3) /* same iter space */
                        {
                            arr_28 [i_7] [i_3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)255)) || (((/* implicit */_Bool) (unsigned char)153)))))) ^ (arr_21 [i_0] [i_0])))) > (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_7])) & (((/* implicit */int) (_Bool)1))))) * (arr_10 [i_0 - 2] [i_7 + 1] [i_0])))));
                            arr_29 [i_0] = ((/* implicit */unsigned char) var_16);
                            var_31 ^= ((/* implicit */unsigned int) arr_24 [i_7] [i_1] [i_2] [i_3] [i_7] [i_2]);
                        }
                        var_32 = (-(((/* implicit */int) arr_24 [i_0] [i_1] [i_2] [i_3] [i_1] [i_2])));
                    }
                } 
            } 
        } 
        arr_30 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_6)) ? ((+(((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (747388376))));
    }
    for (unsigned long long int i_8 = 3; i_8 < 23; i_8 += 2) /* same iter space */
    {
        arr_34 [i_8] = ((/* implicit */signed char) ((int) max((((/* implicit */unsigned long long int) ((_Bool) -747388380))), (var_17))));
        arr_35 [i_8] = (~(var_2));
        arr_36 [i_8] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_11 [0U]))))));
    }
    for (unsigned char i_9 = 0; i_9 < 16; i_9 += 4) 
    {
        var_33 = ((/* implicit */signed char) (((+(((/* implicit */int) arr_2 [i_9])))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) arr_10 [i_9] [i_9] [i_9]))) <= ((-(var_8))))))));
        /* LoopNest 3 */
        for (long long int i_10 = 0; i_10 < 16; i_10 += 2) 
        {
            for (int i_11 = 1; i_11 < 13; i_11 += 1) 
            {
                for (unsigned char i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    {
                        var_34 -= ((/* implicit */unsigned char) (-(max((arr_32 [i_11 + 1] [i_11 + 1]), (((/* implicit */long long int) (unsigned char)155))))));
                        arr_46 [i_12] [i_12] [i_11] [i_10] [i_10] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_9] [i_11]))) + (arr_32 [i_12] [i_10])))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_38 [i_9])) ? (var_18) : (((/* implicit */int) arr_42 [i_9] [i_11])))))) : (((arr_10 [i_9] [i_11 - 1] [i_9]) - (arr_10 [i_9] [i_11 + 1] [i_10])))));
                        var_35 = ((/* implicit */unsigned char) (!((!(((var_18) > (((/* implicit */int) var_4))))))));
                        arr_47 [i_9] [i_10] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9] [i_12]))) % (var_2)));
                        var_36 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8))) + (7103070861225302414LL)));
                    }
                } 
            } 
        } 
        var_37 ^= ((/* implicit */unsigned char) ((((var_17) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_9] [i_9] [i_9] [i_9]))))) != (((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) var_11)) ^ (arr_8 [i_9] [i_9] [i_9]))))))));
        var_38 = ((/* implicit */unsigned short) 69414250);
    }
    var_39 = ((/* implicit */signed char) (((((-(var_8))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) == (var_8)));
    var_40 = ((/* implicit */_Bool) min((9674999832504271483ULL), (((/* implicit */unsigned long long int) 8196265699299783921LL))));
}
