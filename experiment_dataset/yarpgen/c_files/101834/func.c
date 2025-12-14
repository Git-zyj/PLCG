/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101834
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 4; i_2 < 23; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        var_13 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) 3952289850U)) ? (2705358843U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [3U] [i_1] [i_1])))));
                        var_14 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) == (((/* implicit */int) arr_6 [4U] [i_2] [4U] [4U]))));
                    }
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2016)) ? (2740148306477903867LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
                }
                for (long long int i_4 = 1; i_4 < 23; i_4 += 2) 
                {
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) ((arr_9 [i_4] [i_4]) / (((/* implicit */unsigned long long int) 2740148306477903867LL)))))) ? (min((3952289850U), (((/* implicit */unsigned int) (short)-2016)))) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) -2059257980)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))))))));
                    var_17 ^= ((/* implicit */short) var_1);
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((var_12) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) : ((-(arr_2 [i_0]))))))));
                    var_19 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_7)), (min((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))))))));
                }
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))), ((~(1697769919362628403ULL))))))))));
            }
        } 
    } 
    var_21 *= ((/* implicit */unsigned long long int) var_12);
}
