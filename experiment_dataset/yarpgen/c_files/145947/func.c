/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145947
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
    var_14 = ((((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-43))) - (1827529370U))) + (((/* implicit */unsigned int) var_0)))) + (((/* implicit */unsigned int) ((/* implicit */int) var_5))));
    var_15 = ((/* implicit */unsigned int) (short)126);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_16 = (~(((((-1) + (2147483647))) >> (((((/* implicit */int) (unsigned short)19107)) - (19076))))));
                    arr_6 [i_1] [i_2] [13ULL] [i_1] = ((/* implicit */int) min((((((((/* implicit */unsigned int) ((/* implicit */int) (short)129))) ^ (2467437922U))) ^ ((~(2547995761U))))), (((/* implicit */unsigned int) (short)-127))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_13 [i_1] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned char)127)))) | (((((/* implicit */int) (short)127)) * (((/* implicit */int) (unsigned short)45898))))));
                                arr_14 [4U] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((1395008407870986206LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250)))))))) & (((/* implicit */int) ((short) ((unsigned int) -810563042))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) (signed char)-64);
                }
            } 
        } 
    } 
}
