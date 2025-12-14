/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152940
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
    var_15 |= (+(var_10));
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (short)4096)) || (((/* implicit */_Bool) -1LL))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) (~((((~(-1LL))) << (((((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) - (18446744073709551605ULL)))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    arr_8 [i_1] [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */long long int) 2122939317)) : (7LL));
                    var_18 = ((/* implicit */unsigned char) (-(var_8)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((long long int) (+(var_3))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4 + 1] [i_4 + 1] = ((/* implicit */unsigned int) arr_13 [i_0 + 1] [i_2 - 1] [i_0] [i_4 - 1] [i_4]);
                                arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 238385254649939973LL)) ? ((-(var_1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 256403972)) ? (((/* implicit */int) (short)7289)) : (((/* implicit */int) (unsigned char)249)))))));
                                var_20 -= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_0 [(unsigned char)18])) ? (238385254649939973LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                            }
                        } 
                    } 
                    arr_17 [i_0 - 3] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)6076)) << (((/* implicit */int) arr_1 [i_0] [i_2]))));
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_0 - 1] [(short)0] [i_0])))))));
                }
                /* vectorizable */
                for (long long int i_5 = 1; i_5 < 19; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_6 = 2; i_6 < 19; i_6 += 3) 
                    {
                        arr_22 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (~(var_13)));
                        var_22 &= ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_5] [i_5] [4U] [i_5] [i_5 + 1])) << (((/* implicit */int) arr_18 [i_0] [(_Bool)0] [i_5]))));
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) arr_21 [i_5] [(signed char)16]))));
                        var_24 += ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_5 + 1] [i_7])) ? (arr_14 [(_Bool)1] [i_0] [i_0] [i_0] [i_0 - 3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -607160586)) ? (((/* implicit */int) (unsigned short)59474)) : (((/* implicit */int) arr_11 [i_0] [i_0] [(unsigned short)2] [i_0] [i_0])))))));
                        /* LoopSeq 1 */
                        for (long long int i_8 = 3; i_8 < 18; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((-2229835773566258685LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                            var_26 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)56820)) ? (((/* implicit */int) var_7)) : (-1710111604))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                            var_27 = ((/* implicit */long long int) max((var_27), ((-((~(3971644915590218593LL)))))));
                            arr_29 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_14))));
                            arr_30 [i_0] [i_1] [i_7] [i_8] = ((/* implicit */unsigned char) arr_4 [i_0] [i_5]);
                        }
                    }
                    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [7ULL]))) : (6987522175854714375ULL)))) ? ((-(((/* implicit */int) arr_11 [i_0] [i_0] [(_Bool)0] [i_1] [(_Bool)0])))) : (((/* implicit */int) (_Bool)0)))))));
                }
                for (long long int i_9 = 4; i_9 < 18; i_9 += 2) /* same iter space */
                {
                    var_29 ^= ((var_6) || (((((/* implicit */_Bool) ((0ULL) - (var_0)))) || (((/* implicit */_Bool) arr_19 [i_1] [i_9])))));
                    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_28 [i_1] [i_9] [i_9] [i_9] [i_9 - 2])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((((/* implicit */int) var_11)) <= (((/* implicit */int) var_14))))))))))));
                }
                for (long long int i_10 = 4; i_10 < 18; i_10 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_11 = 2; i_11 < 17; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 20; i_12 += 1) 
                        {
                            {
                                var_31 ^= ((/* implicit */short) arr_0 [i_10]);
                                var_32 = ((/* implicit */unsigned short) arr_14 [i_0 - 2] [i_1] [i_10] [i_11] [i_12]);
                            }
                        } 
                    } 
                    arr_40 [i_0] = ((/* implicit */_Bool) var_5);
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_43 [i_0] [i_1] [i_1] [(unsigned short)19] [i_1]))))) ? (((/* implicit */int) arr_43 [i_0] [i_1] [i_10 - 4] [i_13] [i_14])) : ((+(((/* implicit */int) var_7)))))) | ((+(((int) (_Bool)1))))));
                                arr_46 [i_0 - 3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_0 + 1] [i_0 + 1] [i_13] [i_0]))))) > (((/* implicit */int) arr_37 [17U] [i_0 - 1] [i_0] [i_0]))));
                                var_34 = ((/* implicit */_Bool) min((var_34), ((!(var_6)))));
                                arr_47 [9LL] [i_0] [i_0] = ((/* implicit */unsigned int) min((arr_34 [i_0] [i_10] [i_0] [i_14]), (((((/* implicit */_Bool) (unsigned short)31)) ? (((((/* implicit */_Bool) 7274635472172181308LL)) ? (-7LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)28688)) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    arr_48 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2674698574787571792ULL)) ? (((/* implicit */int) (signed char)-49)) : (-1710111626)))) ? (((arr_43 [i_0] [i_0] [i_1] [i_10] [i_10 - 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_1] [i_10])))))) : (((var_2) << (((((/* implicit */int) arr_2 [i_1])) + (14366))))))) : (((/* implicit */unsigned long long int) arr_44 [i_0] [i_0] [9LL] [i_10] [i_10]))));
                }
                arr_49 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) ((signed char) 3971644915590218593LL))) ? (((int) var_13)) : ((-(((/* implicit */int) (_Bool)1)))))) : ((+(-1)))));
                var_35 = ((/* implicit */long long int) ((_Bool) arr_21 [i_0 + 2] [i_0]));
            }
        } 
    } 
    var_36 = ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
}
