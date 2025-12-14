/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163126
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned char)2), ((unsigned char)12)))) ? (((((/* implicit */_Bool) -1399365613)) ? (17732923532771328ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)24)) && (((/* implicit */_Bool) 4410725811611301058LL))))))))) && (((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (short)25)), (14U))) * (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)7), ((unsigned char)231))))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((var_3) / (var_10)))) ? (((((-4481662463582960642LL) + (9223372036854775807LL))) >> (((4294967292U) - (4294967286U))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))), (((/* implicit */long long int) (~(1343847431U))))));
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                            {
                                var_13 = ((/* implicit */unsigned long long int) (short)-25);
                                arr_14 [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-4609)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16283396400230515339ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)25))) : (10234294207121338629ULL)))) ? (max((var_3), (((/* implicit */unsigned long long int) 1767047144U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)37)), (var_6))))))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)28906))) ^ (var_1))), (((/* implicit */unsigned long long int) ((var_5) - (((/* implicit */long long int) -1069906810)))))))));
                                arr_15 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)1022))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)46600)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_5))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0)))))))) : (arr_9 [i_4] [i_3] [i_2] [i_1] [i_1] [i_0]));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */short) ((((((524272LL) << (((-4410725811611301039LL) + (4410725811611301067LL))))) - (((/* implicit */long long int) ((/* implicit */int) min((var_11), (var_11))))))) - (((/* implicit */long long int) ((arr_2 [i_0 - 1] [i_0]) >> (((arr_2 [i_0 - 1] [i_0]) - (81827293U))))))))) : (((/* implicit */short) ((((((524272LL) << (((-4410725811611301039LL) + (4410725811611301067LL))))) - (((/* implicit */long long int) ((/* implicit */int) min((var_11), (var_11))))))) - (((/* implicit */long long int) ((arr_2 [i_0 - 1] [i_0]) >> (((((arr_2 [i_0 - 1] [i_0]) - (81827293U))) - (222487918U)))))))));
                                arr_17 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */short) var_2);
                            }
                            for (int i_5 = 2; i_5 < 22; i_5 += 3) 
                            {
                                var_14 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) 2644424255U)), (13752966969753146133ULL))) << (((((var_10) << (((1181069822U) - (1181069763U))))) - (2882303761517117424ULL)))));
                                arr_22 [i_0] [i_0] [i_2] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) (unsigned short)2700);
                            }
                            /* vectorizable */
                            for (short i_6 = 0; i_6 < 23; i_6 += 3) 
                            {
                                var_15 = ((var_9) / (((/* implicit */unsigned long long int) 6U)));
                                var_16 = var_8;
                            }
                            arr_25 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1010))) : (arr_6 [i_0] [i_1] [i_0])))) ? (((/* implicit */long long int) ((var_2) - (((/* implicit */int) arr_3 [i_0 - 1]))))) : ((~(4410725811611301049LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((3469702418172109095ULL), (var_3))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4410725811611301035LL)))))))))) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) min((416507867), (((/* implicit */int) (signed char)-84))))) : (((((/* implicit */_Bool) (unsigned short)997)) ? (5919551262274631733ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46578))))))));
}
