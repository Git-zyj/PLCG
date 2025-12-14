/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136278
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
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0 - 3] = ((/* implicit */short) (unsigned short)24215);
                arr_6 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) var_0))));
                /* LoopSeq 4 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    var_11 = max((((/* implicit */unsigned short) (signed char)(-127 - 1))), (min(((unsigned short)0), ((unsigned short)24225))));
                    arr_10 [i_2] [i_1] [i_2] [i_1] = min(((unsigned short)41328), (((/* implicit */unsigned short) (short)10798)));
                    arr_11 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((int) (unsigned short)41337));
                    arr_12 [i_2] [i_1 + 2] [(short)8] [i_1 + 4] = ((/* implicit */long long int) (+(((/* implicit */int) (short)-10785))));
                }
                for (long long int i_3 = 3; i_3 < 17; i_3 += 4) /* same iter space */
                {
                    var_12 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3])) && (((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)61846)))))))));
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) ^ (arr_14 [i_1 + 1])))) ? (min((((/* implicit */long long int) arr_1 [i_1 + 4] [i_0])), (-8176403477256851140LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-4))))))));
                }
                /* vectorizable */
                for (long long int i_4 = 3; i_4 < 17; i_4 += 4) /* same iter space */
                {
                    arr_17 [i_0 - 2] [i_1] [i_4] = ((/* implicit */long long int) var_6);
                    arr_18 [i_0 - 1] [i_1] [i_1] &= ((/* implicit */short) (_Bool)1);
                    var_14 = ((/* implicit */unsigned long long int) -6924588630926510453LL);
                }
                for (long long int i_5 = 3; i_5 < 17; i_5 += 4) /* same iter space */
                {
                    arr_23 [i_0] [i_5] [i_1] [i_5] = (~(min((arr_14 [i_1 + 1]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_1 + 1]))))))));
                    arr_24 [i_0 - 1] [i_5] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((unsigned long long int) var_7))) ? (((/* implicit */int) max((arr_13 [i_0]), (((/* implicit */short) (unsigned char)249))))) : (((((/* implicit */int) (unsigned short)41311)) / (((/* implicit */int) (signed char)-112))))))));
                }
                var_15 = ((/* implicit */unsigned long long int) ((unsigned short) arr_9 [i_0] [i_1] [i_0] [i_0]));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((unsigned short) -692315986282194112LL));
    var_17 = ((/* implicit */signed char) var_7);
    var_18 = ((/* implicit */_Bool) (+(var_2)));
}
