/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103554
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
    var_19 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        var_20 = ((unsigned long long int) max((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])), (var_16)));
        var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-9427))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 3]))) - (((((/* implicit */_Bool) var_12)) ? (arr_5 [i_0] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))))) % (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)35477)), (1253911322784358138LL)))) : (((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */unsigned long long int) var_3)) : (var_2)))))));
                    var_23 = ((/* implicit */unsigned short) var_9);
                    var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)33485))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned int) (unsigned char)251);
    }
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_4 = 2; i_4 < 16; i_4 += 4) 
        {
            var_26 ^= ((/* implicit */short) (unsigned short)33506);
            arr_13 [i_3] [i_4 - 2] [i_4 - 2] = (unsigned char)101;
        }
        for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            arr_17 [i_3] [i_3] [i_5] = ((((/* implicit */_Bool) (unsigned char)155)) || (((/* implicit */_Bool) -4205178403156563730LL)));
            arr_18 [i_3] = ((/* implicit */_Bool) ((((unsigned long long int) (-9223372036854775807LL - 1LL))) << (((((/* implicit */int) (short)26592)) - (26577)))));
            /* LoopSeq 2 */
            for (signed char i_6 = 1; i_6 < 17; i_6 += 3) 
            {
                var_27 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) (unsigned char)139)))) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)33475)))))));
                arr_21 [i_3] [i_6] [i_3] = ((/* implicit */signed char) -699246093946500101LL);
            }
            for (long long int i_7 = 1; i_7 < 17; i_7 += 2) 
            {
                var_28 = (signed char)-125;
                arr_24 [i_7] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_18))) + (-9223372036854775801LL)))) ? (((((/* implicit */unsigned long long int) -8241075450594534342LL)) % (var_15))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)70))))))), (((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) (short)16)), (-1270927734886732LL))))))));
            }
        }
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
            {
                {
                    arr_32 [i_3] [i_8] [i_9] [i_3] = ((/* implicit */_Bool) var_4);
                    /* LoopSeq 2 */
                    for (short i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        var_29 += ((/* implicit */signed char) min((((/* implicit */int) var_12)), ((~(((((((/* implicit */int) arr_27 [i_9])) + (2147483647))) << (((((/* implicit */int) (signed char)31)) - (31)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_11 = 3; i_11 < 15; i_11 += 1) 
                        {
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) var_11))))))));
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) var_7))));
                            var_32 &= ((/* implicit */long long int) ((unsigned char) (signed char)58));
                            var_33 = ((/* implicit */long long int) (short)(-32767 - 1));
                        }
                    }
                    for (long long int i_12 = 3; i_12 < 17; i_12 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_13 = 4; i_13 < 17; i_13 += 3) 
                        {
                            arr_43 [i_3] [(_Bool)1] [i_3] [i_3] [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_16))))), (arr_40 [i_9] [i_13 - 4] [i_13] [(signed char)12] [i_13]))))));
                            var_34 = ((/* implicit */unsigned short) (((~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)175))) ^ (-4981951329876602441LL))))) << (((((var_8) << (((var_11) - (241888603854971649ULL))))) - (16094598430826954752ULL)))));
                            arr_44 [i_3] [i_8] [i_9] [i_12] [i_13] = ((/* implicit */unsigned char) var_14);
                            var_35 = ((/* implicit */signed char) max((699246093946500100LL), (min((var_7), (((/* implicit */long long int) (unsigned char)168))))));
                            var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)15872)) ^ (((/* implicit */int) var_6))))))) ? ((~(((((/* implicit */int) (unsigned short)33471)) & (((/* implicit */int) (short)-4)))))) : ((~(((/* implicit */int) min(((unsigned char)15), (((/* implicit */unsigned char) var_5))))))))))));
                        }
                        for (long long int i_14 = 0; i_14 < 18; i_14 += 3) 
                        {
                            arr_48 [4LL] [i_8] [i_9] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8811))) : (var_15)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4))))))))));
                            var_37 = arr_31 [i_14];
                        }
                        /* vectorizable */
                        for (signed char i_15 = 0; i_15 < 18; i_15 += 1) 
                        {
                            arr_51 [i_3] [i_9] [i_9] [i_12] [i_12 + 1] [i_3] [i_12] = ((/* implicit */unsigned long long int) arr_16 [(unsigned char)4] [i_9] [i_15]);
                            var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) (!(var_6))))));
                            var_39 = ((/* implicit */_Bool) (-(var_11)));
                            arr_52 [i_3] [(unsigned char)11] [i_9] [i_9] [(_Bool)1] = ((/* implicit */unsigned int) ((long long int) (short)7));
                        }
                        var_40 = (short)-18916;
                        var_41 = ((/* implicit */signed char) (((((_Bool)1) ? (4981951329876602440LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8654))))) / (((/* implicit */long long int) max(((-(((/* implicit */int) (short)8811)))), (((((/* implicit */_Bool) -6999181151747731715LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)100)))))))));
                    }
                }
            } 
        } 
    }
}
