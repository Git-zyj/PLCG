/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152062
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_1 + 1] [i_1] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_0] [i_1 - 1])) : (((/* implicit */int) var_4)))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) (_Bool)1));
                var_12 += ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)167)))))))), (max((var_9), (((/* implicit */unsigned long long int) arr_3 [i_1]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((long long int) -3212958959201793704LL))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) -3212958959201793704LL)) : (942971172450188055ULL)))))) || (((/* implicit */_Bool) (~(17524279770964171017ULL))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 3) 
    {
        var_14 += ((/* implicit */int) arr_8 [(short)6]);
        /* LoopNest 3 */
        for (signed char i_3 = 2; i_3 < 20; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    {
                        var_15 = ((/* implicit */int) ((10690043737809535945ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2 - 1])))));
                        arr_16 [i_2] [i_2] [i_2] [(unsigned short)18] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) + (3212958959201793703LL)));
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            var_16 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_12 [i_2] [1] [i_2] [10ULL])) ? (arr_18 [i_2] [i_3 + 2] [i_3 + 2] [i_2] [i_6]) : (((/* implicit */int) arr_19 [i_5] [i_5] [6] [(unsigned char)13] [i_5] [i_5]))))));
                            arr_21 [i_6] [(_Bool)1] [i_4] [(_Bool)1] [i_2] |= ((/* implicit */int) (-(-3212958959201793691LL)));
                            var_17 = ((/* implicit */_Bool) (short)-19969);
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 3) 
                        {
                            arr_24 [i_2] [i_2] [i_4] [1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) >> (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 372343667)) : (var_9))) - (372343663ULL)))));
                            var_18 -= ((/* implicit */unsigned long long int) (+((~(-3212958959201793704LL)))));
                            arr_25 [14ULL] [14ULL] [11] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_2 + 1] [(signed char)17] [i_3 - 1] [i_2] [i_7])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_9 [i_2 - 2]))));
                            var_19 -= ((/* implicit */unsigned int) 3212958959201793702LL);
                        }
                        for (short i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            var_20 = ((/* implicit */_Bool) (+(var_7)));
                            arr_28 [i_2] [i_2] [i_2] [i_5] [18] = ((/* implicit */short) (unsigned char)24);
                            arr_29 [i_2] [i_3] [i_4] [i_2] [(_Bool)1] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_3 - 1] [i_5] [i_2 - 2] [i_5] [i_2] [i_3 + 2] [i_3 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_3 - 1] [0] [i_2 - 3] [i_5] [i_2] [i_8] [i_3 + 1]))) : (var_2)));
                            var_21 = ((/* implicit */unsigned char) ((var_7) - (((/* implicit */int) arr_20 [i_2] [i_2 - 2] [(signed char)6] [i_2 - 2] [i_8]))));
                        }
                        arr_30 [i_2] = ((/* implicit */_Bool) arr_9 [i_5]);
                    }
                } 
            } 
        } 
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_35 [i_9] = ((/* implicit */int) arr_22 [i_9] [i_9] [i_9] [i_9] [3] [i_9] [i_9]);
        /* LoopSeq 1 */
        for (unsigned char i_10 = 4; i_10 < 10; i_10 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) (~(min((arr_3 [i_9]), ((~(arr_23 [i_9] [10ULL] [i_9] [10ULL] [(_Bool)1])))))));
            arr_40 [(unsigned char)2] [i_9] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_20 [i_9] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_9] [i_9] [i_9] [i_9] [i_9] [i_10] [i_10])) >> (((147031904792921781ULL) - (147031904792921775ULL)))))) : (((((/* implicit */_Bool) arr_36 [i_9] [i_9])) ? (((/* implicit */unsigned long long int) -372343647)) : (arr_14 [i_9] [i_9] [(_Bool)1] [i_9] [i_9] [0LL]))))), ((+(((((/* implicit */_Bool) 372343667)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_3)))))));
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((long long int) arr_4 [i_9])), (((/* implicit */long long int) max((((/* implicit */unsigned short) arr_27 [i_9] [i_9] [i_9] [i_9] [i_12] [i_9])), (var_5))))))) ? ((~(((/* implicit */int) arr_19 [i_10 + 1] [i_10 - 4] [i_10 - 3] [i_10 - 4] [i_10 - 3] [i_10 + 1])))) : (((/* implicit */int) max(((unsigned char)81), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) >= (372343667)))))))));
                            var_24 = ((/* implicit */signed char) (~(((/* implicit */int) (((~(7381364753859536248ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_33 [i_9])))))))));
                        }
                        arr_51 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */int) (~((~(-3212958959201793697LL)))));
                    }
                } 
            } 
        }
    }
    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((((/* implicit */int) ((var_9) == (var_2)))) % ((-(372343635))))) != ((+(((/* implicit */int) ((short) var_4))))))))));
    var_26 = ((/* implicit */long long int) var_10);
}
