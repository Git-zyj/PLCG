/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134871
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) ((unsigned short) ((unsigned long long int) var_2)));
                            arr_13 [i_1] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) var_1)));
                        }
                    } 
                } 
                var_15 &= ((var_7) >= (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_5)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 4; i_4 < 9; i_4 += 2) 
    {
        for (short i_5 = 3; i_5 < 10; i_5 += 3) 
        {
            {
                arr_19 [i_4] [i_5] = ((/* implicit */short) ((unsigned short) arr_15 [i_4] [i_5]));
                var_16 *= ((/* implicit */unsigned short) (!(((((/* implicit */int) var_9)) > (((/* implicit */int) arr_2 [i_5]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 3; i_6 < 10; i_6 += 2) 
    {
        for (int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */short) arr_23 [i_6 - 3])), (var_6)))))))));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 8; i_8 += 2) 
                {
                    for (long long int i_9 = 4; i_9 < 10; i_9 += 3) 
                    {
                        {
                            arr_31 [i_7] [(_Bool)1] [(_Bool)1] [i_7] &= ((/* implicit */signed char) ((int) (~(((((/* implicit */unsigned int) var_7)) | (var_5))))));
                            var_18 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) & ((~(((/* implicit */int) (unsigned short)54375))))));
                            var_19 &= ((/* implicit */unsigned char) (+(((/* implicit */int) max(((unsigned short)11172), ((unsigned short)54375))))));
                            arr_32 [i_6] [4U] [i_8] [i_6] = ((/* implicit */unsigned char) var_0);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_7);
    var_21 = ((/* implicit */unsigned short) var_5);
}
