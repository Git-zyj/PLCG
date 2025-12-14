/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113303
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [i_0] = max((var_8), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) (unsigned char)145)))))) >= (((((/* implicit */_Bool) -8321341670385577548LL)) ? (-8321341670385577548LL) : (8321341670385577548LL)))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    arr_9 [i_0] [13LL] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((var_0) / (var_14))), (((/* implicit */long long int) arr_8 [i_0]))))) ? (min((((/* implicit */unsigned long long int) ((var_15) << (((arr_7 [i_0] [(_Bool)1] [i_0] [i_0]) - (8343856809698978302ULL)))))), (11844258014068775784ULL))) : (((((/* implicit */_Bool) (signed char)-116)) ? ((~(var_5))) : (arr_7 [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                    var_17 |= ((long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_5 [i_0]))))) : (((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_0 [i_2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)37)))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (6602486059640775832ULL) : (((/* implicit */unsigned long long int) 2772108955U))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_3 + 1]) >= (((/* implicit */long long int) ((/* implicit */int) ((-1) == (((/* implicit */int) var_11)))))))))) : ((-(min((var_0), (((/* implicit */long long int) (unsigned short)52428))))))));
                        var_19 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (-(-1500305889)))) ? (((arr_12 [i_0] [i_1] [i_2] [i_2]) + (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((11844258014068775785ULL) < (var_5)))))))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 2; i_4 < 22; i_4 += 1) 
                        {
                            arr_15 [i_1] [i_1] [(_Bool)1] [i_3] = ((/* implicit */long long int) ((((unsigned long long int) min((((/* implicit */long long int) (unsigned short)65535)), (7418253170037299224LL)))) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */long long int) var_7)) > (-5693004094689912430LL)))))))));
                            arr_16 [2] [2] = ((/* implicit */unsigned int) max((((((long long int) (signed char)1)) * (((((/* implicit */long long int) ((/* implicit */int) var_16))) / (5170406608959044470LL))))), (((/* implicit */long long int) (~((+(((/* implicit */int) (signed char)1)))))))));
                        }
                        for (short i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            var_20 += ((/* implicit */unsigned int) max((((/* implicit */long long int) min(((-(((/* implicit */int) var_16)))), (((/* implicit */int) (unsigned short)57711))))), (min((((/* implicit */long long int) (unsigned char)22)), ((+(9223372036854775807LL)))))));
                            arr_20 [i_0] [i_1] &= ((/* implicit */long long int) 6602486059640775842ULL);
                            var_21 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_7 [i_2 + 4] [i_3 + 2] [i_2 + 4] [i_1])) ? (arr_7 [i_1] [i_1] [i_3] [i_5]) : (arr_7 [i_0] [i_0] [i_0] [i_0]))), ((~(arr_7 [i_1] [i_2] [i_3] [i_2])))));
                        }
                        var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_18 [i_1] [i_1])) || (((/* implicit */_Bool) var_12)))))) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) max((((((/* implicit */_Bool) arr_8 [i_1])) && (((/* implicit */_Bool) arr_5 [i_0])))), ((!(((/* implicit */_Bool) (unsigned char)29)))))))));
                        var_23 = ((/* implicit */_Bool) max((((2147483647) * (((/* implicit */int) ((arr_0 [i_0] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_0] [i_0] [i_3] [i_3])))))))), ((-(((((/* implicit */int) (unsigned short)31519)) * (((/* implicit */int) (signed char)24))))))));
                    }
                    for (int i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-28643)), ((unsigned short)65532)))) ? (((/* implicit */int) ((5303005238992487115LL) != (6382618947233528234LL)))) : (((/* implicit */int) (unsigned char)148)))) * (((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_2] [i_2] [i_6]))));
                        arr_25 [i_0] = max((-1), (((/* implicit */int) (unsigned short)65532)));
                    }
                }
                /* LoopNest 3 */
                for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
                        {
                            {
                                arr_33 [i_0] [i_1] [i_7] [i_7] [i_7] [i_8] [i_7] = ((/* implicit */unsigned int) 1152921504606846968ULL);
                                var_24 = ((/* implicit */_Bool) min((max((max((arr_30 [i_0] [i_1] [i_1] [i_0] [i_9]), (((/* implicit */long long int) (signed char)1)))), (((/* implicit */long long int) ((signed char) (unsigned char)227))))), (((/* implicit */long long int) (~(2356125418U))))));
                                var_25 = 10443611172720944039ULL;
                                arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) max(((-(arr_30 [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_1] [10U])) > (((/* implicit */int) (unsigned short)1950))))))));
                            }
                        } 
                    } 
                } 
                arr_35 [i_0] [i_1] &= (+(min((arr_4 [i_1 + 2] [i_1 + 1] [i_1 + 2]), (2017612633061982208LL))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)247)))))))) ? (((unsigned int) (+((-2147483647 - 1))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)52837)) ? (((/* implicit */int) (signed char)-9)) : (1500305903)));
}
