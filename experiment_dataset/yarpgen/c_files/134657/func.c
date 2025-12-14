/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134657
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
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_12 [i_1] = ((/* implicit */long long int) ((((int) (_Bool)1)) < (((var_6) ? (((/* implicit */int) var_1)) : (((int) var_5))))));
                            var_13 ^= max(((+(((/* implicit */int) var_7)))), (((/* implicit */int) arr_10 [i_1] [i_2])));
                            var_14 |= ((/* implicit */int) var_3);
                            arr_13 [i_0] [i_1] [i_2] [i_0] [i_3] [i_1] |= ((/* implicit */short) arr_9 [i_0] [i_2]);
                        }
                    } 
                } 
                var_15 = ((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((var_2) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)100)), (var_11))))))));
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 17; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) min((var_16), (((((/* implicit */_Bool) arr_8 [i_0] [(signed char)12] [(signed char)12])) ? (min((var_3), (6230415775329085345LL))) : (-6LL)))));
                            arr_19 [i_4] = ((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)9))))), (max((((/* implicit */long long int) (-(((/* implicit */int) var_10))))), (max((6230415775329085338LL), (((/* implicit */long long int) (short)-15))))))));
                            arr_20 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned short) var_7)), ((unsigned short)20339))), (((/* implicit */unsigned short) min((var_9), (var_9))))))) ? (((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))) : (min((var_5), (((/* implicit */long long int) arr_2 [i_4 + 2])))))) : (max((((/* implicit */long long int) (~(((/* implicit */int) var_1))))), (max((var_5), (((/* implicit */long long int) var_7))))))));
                            arr_21 [i_0] [i_1] [(_Bool)1] [i_5] [i_0] [i_4] = (!(((/* implicit */_Bool) var_4)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            {
                arr_27 [i_7] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_7 [i_6] [i_7] [i_6])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_6] [i_7]))))) : (var_12)))));
                var_17 = ((/* implicit */short) min((var_17), (var_10)));
                /* LoopNest 2 */
                for (long long int i_8 = 3; i_8 < 17; i_8 += 1) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_18 |= ((/* implicit */unsigned char) (-(((/* implicit */int) var_4))));
                            arr_32 [i_6] [i_7] [i_8 + 1] [(unsigned short)8] [i_8] = ((/* implicit */unsigned char) ((_Bool) (unsigned char)227));
                        }
                    } 
                } 
            }
        } 
    } 
}
