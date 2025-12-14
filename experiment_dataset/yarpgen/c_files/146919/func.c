/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146919
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
    var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) var_9))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((1807966284) | (-275150645)));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((short) (short)-4096));
        arr_4 [i_0] [i_0] = ((/* implicit */int) (-(var_2)));
        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3052968224530442558LL)) ? (((/* implicit */int) (unsigned short)49662)) : (1442554149)));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_6 [i_1] [i_1]))))));
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_19 = ((/* implicit */int) 3692206233140021209LL);
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            var_20 -= ((/* implicit */short) var_6);
                            arr_18 [i_1] [i_2] [i_2] [i_2] [i_4] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)72))));
                        }
                    }
                } 
            } 
            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((unsigned long long int) 11760502172574494927ULL)))));
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) ((517002621) << (((3948752434949000695LL) - (3948752434949000693LL)))));
                            arr_28 [i_2] [i_7] [i_7] [i_6] [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-99))) : (-2640689641857176343LL)));
                            var_23 = ((/* implicit */int) ((((/* implicit */int) var_0)) >= (1761108057)));
                            var_24 = ((/* implicit */unsigned long long int) (-(arr_17 [i_1] [i_2] [i_6] [i_7])));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) ((arr_13 [i_1]) | (var_3)));
            }
        }
        for (unsigned short i_9 = 4; i_9 < 14; i_9 += 2) 
        {
            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) arr_9 [i_1] [i_9]))));
            var_27 *= ((/* implicit */short) (-(((/* implicit */int) (unsigned char)23))));
            /* LoopSeq 1 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_33 [i_1] [i_1] [i_9] [i_10] = (_Bool)0;
                arr_34 [i_1] [i_9] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_0))))));
            }
        }
    }
    var_28 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 14550174673086674476ULL)) ? (-8679427856634277978LL) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))))), ((+(15555978978624090296ULL)))));
    var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_16))));
}
