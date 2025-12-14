/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150562
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((var_1) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1)))))))) >= (var_4)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    arr_7 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned char) arr_6 [i_0] [i_1] [i_0] [i_0]);
                    arr_8 [i_1] = ((/* implicit */long long int) ((((long long int) arr_2 [i_1] [i_1])) > (((/* implicit */long long int) ((unsigned int) arr_1 [i_1 - 1] [i_2])))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)143)) - (((/* implicit */int) (unsigned char)143))))) <= (arr_3 [i_3] [i_0] [i_0])));
                        arr_14 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_0] [i_1] [i_2]);
                    }
                    var_11 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0]))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_2] [i_2]))) | (arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])))));
                }
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_4])) + (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_1] [8U] [i_0])) && (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_4]))))))));
                    var_13 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_16 [i_0] [i_0] [i_1] [i_4]))) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))))) - (((/* implicit */int) ((((unsigned long long int) arr_1 [i_1] [i_4])) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                    var_14 = ((/* implicit */signed char) ((unsigned long long int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_4]))) % (arr_17 [i_0] [i_0] [11] [i_4])))));
                    var_15 -= ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) ((unsigned short) 7610016439497091888LL))) ^ (((/* implicit */int) (signed char)-22)))));
                }
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_1 [i_0] [i_0]))));
                arr_18 [i_0] [i_1] = ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) && (((/* implicit */_Bool) ((arr_3 [i_1] [i_0] [i_0]) << (((((arr_1 [i_1] [11LL]) + (2366806091366542900LL))) - (20LL))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (var_2))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_3)))))));
}
