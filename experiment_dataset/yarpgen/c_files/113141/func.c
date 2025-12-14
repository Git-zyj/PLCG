/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113141
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_13 = (-(((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - ((+(var_0))))));
                arr_7 [0U] [i_1] [i_0] = ((/* implicit */_Bool) var_1);
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_9)))))) | ((+(((((/* implicit */int) var_4)) * (((/* implicit */int) var_8))))))));
                                var_15 = ((/* implicit */short) var_7);
                                var_16 = ((((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_6)))) || ((!(((/* implicit */_Bool) var_2)))))) && (((/* implicit */_Bool) var_4)));
                                arr_17 [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */short) var_10);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 12; i_5 += 3) 
    {
        for (short i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_7 = 3; i_7 < 13; i_7 += 3) 
                {
                    for (short i_8 = 1; i_8 < 13; i_8 += 2) 
                    {
                        {
                            arr_27 [1LL] [i_8] [7U] [i_8] [1LL] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)-6)) == (((/* implicit */int) (signed char)-8))))) >> (((((/* implicit */int) ((unsigned short) (-(var_5))))) - (44998)))));
                            arr_28 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_2))));
                        }
                    } 
                } 
                var_17 &= ((/* implicit */_Bool) var_10);
                arr_29 [5LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) (short)-19683))))))));
                arr_30 [i_6] = ((/* implicit */short) var_2);
            }
        } 
    } 
}
