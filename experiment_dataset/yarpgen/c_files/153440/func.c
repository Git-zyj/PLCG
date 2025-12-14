/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153440
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
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned short) arr_3 [i_0]);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */int) (-(((((/* implicit */_Bool) (signed char)-11)) ? (var_7) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)17)))))))));
                            arr_10 [i_0 - 1] [i_1 - 3] [18U] [i_0 - 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned short)28617))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned char) (signed char)9)))))) % (arr_8 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 2] [i_0 - 2] [i_0 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 3; i_4 < 24; i_4 += 4) 
                            {
                                var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(unsigned short)2] [i_2 + 2]))) : (((unsigned int) (~(arr_8 [i_0] [1ULL] [i_1] [i_2] [i_3] [i_4 - 1]))))));
                                arr_13 [i_0 - 2] [i_0] [i_2 - 1] [i_3] [(unsigned char)23] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) - ((-(((/* implicit */int) ((unsigned char) (unsigned short)36911)))))));
                                arr_14 [i_0 + 3] [i_1 - 2] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36911))) == (var_8))) ? ((+(((/* implicit */int) ((arr_7 [i_0]) == (((/* implicit */int) (unsigned short)36911))))))) : (((/* implicit */int) min(((short)-1365), (((/* implicit */short) (!(arr_4 [i_0] [i_3])))))))));
                                var_23 = ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) var_12))))) + (-2729945377583528492LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((unsigned char) (_Bool)0))))) : (790903495377122626LL));
                            }
                            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 2) 
                            {
                                var_24 *= min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0 + 1] [i_1 + 1] [i_2] [i_3] [i_5] [i_5])) || (((/* implicit */_Bool) arr_16 [i_0 - 1] [i_1] [i_2 - 1] [i_3] [i_5] [i_3]))))), (((long long int) ((unsigned short) var_10))));
                                var_25 += ((/* implicit */unsigned char) arr_6 [i_0 - 3] [i_1 - 3] [i_5]);
                            }
                            var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_16))) - (max((((/* implicit */int) (unsigned short)36919)), (arr_6 [i_0] [i_2 - 1] [(unsigned char)14])))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_6 [i_0 - 3] [i_1] [22ULL])) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (unsigned short)36911))))))) : ((-(17495088621751910063ULL)))));
                            arr_18 [24LL] [i_1 - 2] [i_1] [i_0] [i_3] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (-(((/* implicit */int) var_18)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 3; i_7 < 24; i_7 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)28625)), (5805425825466102292ULL)))) || (((115488696U) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))))) ^ (((/* implicit */int) (((-(arr_3 [i_0]))) == (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)28617)) - (arr_6 [i_0 + 3] [i_1] [i_0])))))))));
                            var_28 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)110))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_0 - 3] [i_1 - 1] [i_7 - 2] [i_7 + 1])))))));
                            var_29 = ((/* implicit */long long int) min((max((arr_6 [i_1 - 1] [i_6] [i_6]), (((/* implicit */int) arr_20 [i_0 + 2] [i_1] [i_6])))), ((+(max((((/* implicit */int) (unsigned char)143)), (-1)))))));
                            var_30 -= ((/* implicit */signed char) var_10);
                            arr_24 [i_0] [i_1] [i_6] [i_7 - 1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-14))) ^ (arr_8 [i_0] [i_7] [i_0] [i_7] [i_6] [i_0]));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (-6911536354616358514LL) : (((/* implicit */long long int) ((/* implicit */int) min((arr_12 [(unsigned short)24] [i_0 - 3] [i_0] [i_0] [i_1] [i_1] [i_1 + 1]), (arr_12 [i_0] [i_0 - 3] [i_0] [i_0] [i_0] [i_1 - 2] [i_1 + 1])))))));
                var_32 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_1])) - (((/* implicit */int) (unsigned char)1))));
            }
        } 
    } 
    var_33 ^= ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
    {
        for (int i_9 = 0; i_9 < 22; i_9 += 3) 
        {
            {
                var_34 ^= ((/* implicit */unsigned short) (~(((-7) & (((/* implicit */int) ((unsigned char) var_17)))))));
                arr_33 [i_8] [i_9] [20] |= ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 18446744073709551607ULL))))), (arr_20 [i_8] [i_8] [6])));
                arr_34 [i_8] = ((/* implicit */signed char) var_9);
            }
        } 
    } 
    var_35 *= ((/* implicit */signed char) (-(-13)));
}
