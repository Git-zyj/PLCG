/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14365
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
    var_19 = ((/* implicit */short) ((var_3) >= (((/* implicit */long long int) ((/* implicit */int) var_16)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2797246815756539947ULL)) ? (2629472388U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 15036138816261069029ULL)) || (((/* implicit */_Bool) 18ULL))))) < (((((/* implicit */_Bool) (short)-1691)) ? (((/* implicit */int) (unsigned short)19061)) : (((/* implicit */int) (unsigned short)46475))))))))));
        var_21 = ((/* implicit */unsigned short) ((unsigned long long int) ((arr_2 [i_0 - 4] [i_0 - 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 15ULL)))) : (((((/* implicit */_Bool) 18446744073709551609ULL)) ? (2629472383U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 4) 
    {
        arr_6 [i_1] [i_1 - 1] = ((/* implicit */unsigned long long int) min((max(((~(2688104113U))), (((/* implicit */unsigned int) (short)1691)))), (((/* implicit */unsigned int) (~(((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) (unsigned char)47))))))))));
        var_22 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(arr_5 [i_1 + 2])))), (min((8827788969684450802ULL), (((/* implicit */unsigned long long int) arr_5 [i_1 + 1]))))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_1])), ((-9223372036854775807LL - 1LL))))) ? (474482499124403474ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_1] [i_1] [i_2])))))))) ? (min((-35184372088832LL), (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_2]))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53327)))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 2; i_4 < 22; i_4 += 2) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) ((_Bool) ((unsigned int) -1365069287)));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 25; i_5 += 4) 
                        {
                            var_25 = ((/* implicit */signed char) (unsigned short)24015);
                            arr_17 [i_1] [i_2] [i_3] = ((/* implicit */short) (-(arr_5 [i_2])));
                            arr_18 [i_3] [i_4] [i_3] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((_Bool) arr_7 [i_2]));
                            var_26 = ((/* implicit */long long int) (~(((unsigned int) (_Bool)1))));
                            arr_19 [i_1 + 1] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) / (((((/* implicit */_Bool) 925616637)) ? (((/* implicit */int) (unsigned short)46484)) : (((/* implicit */int) (_Bool)1))))));
                        }
                        for (short i_6 = 2; i_6 < 23; i_6 += 4) 
                        {
                            arr_22 [i_1] [i_3] [(unsigned short)20] [i_1] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */int) (short)-31156)) <= (((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_2])) ? (((/* implicit */int) arr_13 [i_1 + 2] [i_2] [i_3] [i_4] [i_4])) : (((/* implicit */int) (unsigned short)32704))))))), (((((/* implicit */_Bool) ((short) -965442801))) ? (((/* implicit */int) ((unsigned short) arr_5 [i_1]))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) <= (544674171U))))))));
                            var_27 = ((/* implicit */long long int) ((((((/* implicit */int) arr_12 [i_1] [(unsigned short)0] [i_1 + 1])) != (((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 1] [i_1 + 2])))) ? (((3549189871929208172ULL) * (((/* implicit */unsigned long long int) 2381339727U)))) : (((((/* implicit */_Bool) arr_12 [i_1] [i_1 + 1] [i_1 + 1])) ? (18ULL) : (18ULL)))));
                            arr_23 [i_3] [i_4] [i_4] [i_4 - 2] [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) 24ULL);
                        }
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -479403611)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_25 [i_2] [i_2] [i_2]))))) : (((arr_5 [i_4 - 1]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))) >= (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_3])) ? (1959771794) : (((/* implicit */int) var_7))))), (max((((/* implicit */unsigned long long int) (unsigned short)17555)), (15534030413619451851ULL)))))));
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1913627569U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3972))))))) : (((18446744073709551598ULL) << (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) max((arr_14 [i_1] [i_1] [i_1 + 2] [i_3] [i_3]), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)-8137))) < (var_2))))))) : (min((((/* implicit */int) (short)(-32767 - 1))), ((+(((/* implicit */int) (unsigned char)255))))))));
                            arr_26 [i_3] [i_3] = ((/* implicit */unsigned short) arr_7 [i_1]);
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            var_30 = ((/* implicit */int) max(((-(17349574013605418973ULL))), (((/* implicit */unsigned long long int) min((max((((/* implicit */int) arr_8 [i_1 - 1] [6ULL] [i_4])), (arr_10 [i_3] [i_3]))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-24234))))))))));
                            arr_30 [i_1 - 1] [i_1 - 1] [i_2] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((unsigned long long int) arr_15 [i_1] [i_3] [i_3] [i_4] [i_8]));
                        }
                        var_31 = arr_29 [i_4] [i_1] [i_1] [i_1];
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_9 = 1; i_9 < 23; i_9 += 4) 
        {
            var_32 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 1142031647U)) || (((/* implicit */_Bool) var_8)))));
            var_33 = ((((/* implicit */int) ((short) (short)0))) << (((/* implicit */int) arr_24 [i_9] [i_9])));
            arr_33 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? ((~(((/* implicit */int) (signed char)0)))) : (((((/* implicit */_Bool) (short)-1691)) ? (((/* implicit */int) (_Bool)1)) : (1023)))));
        }
    }
    var_34 = ((/* implicit */_Bool) var_15);
}
