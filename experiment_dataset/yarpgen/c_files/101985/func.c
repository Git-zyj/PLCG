/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101985
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_10 [i_0 - 2] [i_1] [i_2] [i_3] [(unsigned char)0] [i_4] = ((/* implicit */unsigned char) (_Bool)1);
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] = arr_2 [i_0];
                            }
                        } 
                    } 
                    arr_12 [6] [11ULL] [i_2] [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [(_Bool)1] [(unsigned char)7])), (min((max((4520012598181459893LL), (((/* implicit */long long int) arr_9 [i_0] [10] [(signed char)10] [i_1] [i_0])))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)18700)) ^ (((/* implicit */int) arr_5 [9] [9] [i_2])))))))));
                    /* LoopNest 2 */
                    for (short i_5 = 4; i_5 < 11; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                arr_18 [i_0] [9U] [3U] [i_5] [(short)2] = ((/* implicit */unsigned char) 1547028680303971732ULL);
                                var_18 += ((/* implicit */unsigned int) max((min((((/* implicit */int) max((((/* implicit */short) (unsigned char)1)), ((short)6599)))), (max((((/* implicit */int) (unsigned char)169)), (arr_3 [i_0]))))), (((((/* implicit */_Bool) 4520012598181459903LL)) ? ((~(((/* implicit */int) (short)6584)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)79)), ((unsigned short)5081))))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_1] = ((/* implicit */int) var_7);
                }
            } 
        } 
    } 
    var_19 += ((unsigned char) var_6);
}
