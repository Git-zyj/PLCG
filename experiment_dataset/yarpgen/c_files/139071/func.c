/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139071
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
    var_11 = var_2;
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = (((-(((((/* implicit */int) arr_2 [i_1])) / (((/* implicit */int) (signed char)111)))))) * ((+(((/* implicit */int) (unsigned char)255)))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_4] [i_2] [i_3] [i_4] &= ((/* implicit */unsigned char) max((((long long int) (_Bool)0)), (max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_6))))), (-5408641602115774869LL)))));
                                arr_14 [i_0] [i_0] [i_3] [i_3] [i_4] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (arr_3 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3] [i_4] [i_2] [i_3] [i_4]))) : (4031080736U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_0] [i_3] [i_4]))))));
                                var_13 += ((/* implicit */short) min((((((((-1LL) ^ (var_1))) + (9223372036854775807LL))) << (((((unsigned int) arr_1 [i_0] [i_0])) - (4294952693U))))), (((/* implicit */long long int) (short)32767))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [10ULL])))))));
                arr_15 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (min((((/* implicit */unsigned int) var_8)), (var_0)))))) ? (var_5) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (unsigned short)5053)))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_5 = 2; i_5 < 22; i_5 += 3) 
    {
        var_15 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1305291557U)))))) & (((((/* implicit */_Bool) arr_16 [14])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_17 [i_5])))));
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            for (short i_7 = 2; i_7 < 24; i_7 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_8 = 3; i_8 < 24; i_8 += 3) 
                    {
                        arr_25 [i_8] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((int) var_1)) >= (((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) var_8)))))))) : (((/* implicit */int) ((((unsigned long long int) var_1)) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_18 [i_5] [i_5])) : (((/* implicit */int) arr_24 [i_6] [i_6] [i_7] [i_8]))))))))));
                        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
                        arr_26 [i_5] [i_5] = arr_23 [i_8 + 1] [i_5] [i_5] [i_5 + 3];
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (!(((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)18)), (var_4)))) || (((/* implicit */_Bool) max((arr_22 [i_5] [i_5] [i_5]), (((/* implicit */unsigned long long int) (unsigned char)241))))))))))));
                        var_18 *= ((/* implicit */unsigned char) var_2);
                    }
                    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        arr_30 [i_5] = ((/* implicit */short) arr_17 [i_5]);
                        arr_31 [i_5 + 2] [i_5] [i_5 - 1] [i_5] [i_5 + 2] = ((/* implicit */signed char) arr_18 [i_5] [i_6]);
                        var_19 &= 4503599627337728ULL;
                        arr_32 [i_5 + 3] [i_9] [i_7] &= ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_7]))) > (-6790316116300566079LL))))) % (((((/* implicit */unsigned long long int) var_2)) ^ (arr_29 [i_6] [i_6] [i_6] [i_6])))))));
                    }
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_4))))))) ? (((/* implicit */int) arr_16 [i_7])) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_27 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32759))) : (var_1))))))))));
                    arr_33 [i_5] [i_5] [i_5] = min(((+(var_2))), (((/* implicit */int) arr_18 [i_5] [i_7 - 2])));
                }
            } 
        } 
        arr_34 [i_5] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_17 [i_5 - 1]) ^ (((/* implicit */unsigned long long int) 0))))))))));
    }
    /* vectorizable */
    for (unsigned char i_10 = 3; i_10 < 13; i_10 += 4) 
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((unsigned char) 498662443U)))));
        var_22 = ((/* implicit */unsigned int) (_Bool)1);
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 15; i_11 += 3) 
        {
            for (unsigned char i_12 = 1; i_12 < 13; i_12 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_13 = 0; i_13 < 15; i_13 += 4) 
                    {
                        arr_46 [i_10] [i_12 - 1] [i_11] [i_11] [i_10] = ((/* implicit */unsigned short) var_6);
                        arr_47 [i_10] [i_10] [i_12] [i_13] = (!(arr_24 [i_10] [i_12] [i_11] [i_10]));
                    }
                    arr_48 [i_10] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_19 [i_10] [i_11] [i_12 + 2])) || (((/* implicit */_Bool) var_7))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))));
}
