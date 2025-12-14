/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173416
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
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] &= ((/* implicit */unsigned char) var_10);
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) 5670755950288938239LL);
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (long long int i_4 = 3; i_4 < 18; i_4 += 4) /* same iter space */
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */_Bool) -1367978055);
                                var_14 = ((/* implicit */unsigned char) -5670755950288938249LL);
                            }
                            for (long long int i_5 = 3; i_5 < 18; i_5 += 4) /* same iter space */
                            {
                                var_15 = ((/* implicit */unsigned long long int) var_8);
                                var_16 = var_8;
                            }
                            for (long long int i_6 = 3; i_6 < 18; i_6 += 4) /* same iter space */
                            {
                                var_17 |= ((/* implicit */unsigned int) (unsigned char)229);
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_6 + 1] = ((/* implicit */signed char) 4294967295U);
                                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_6))));
                            }
                            arr_23 [i_1] = ((/* implicit */int) (unsigned char)63);
                        }
                    } 
                } 
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) 7854727292837044200ULL))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        for (long long int i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            for (int i_9 = 2; i_9 < 10; i_9 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) -3812184247264250631LL);
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        for (long long int i_11 = 2; i_11 < 11; i_11 += 4) 
                        {
                            {
                                arr_36 [i_7] = ((/* implicit */unsigned short) var_7);
                                var_21 = 0ULL;
                                var_22 = 10592016780872507445ULL;
                                var_23 = ((/* implicit */unsigned int) (signed char)-68);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
