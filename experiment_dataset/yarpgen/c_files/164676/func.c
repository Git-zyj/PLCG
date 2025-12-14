/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164676
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
    var_12 -= ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (min((((/* implicit */int) (unsigned char)59)), (-1129160636))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)196)) >= (1129160616))))))) ? (((/* implicit */unsigned long long int) var_3)) : ((+(var_1)))));
    var_13 = ((_Bool) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_14 -= ((/* implicit */unsigned char) ((unsigned short) ((unsigned long long int) (+(((/* implicit */int) (unsigned short)14768))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_15 *= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)39649))));
                            arr_11 [i_1] [i_3 + 1] = ((/* implicit */_Bool) (unsigned short)25886);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 1; i_4 < 9; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (signed char i_6 = 2; i_6 < 10; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0 - 2] [(unsigned char)1] [i_4] [i_5] [i_6 - 1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_4 - 1] [i_6])) ? (arr_10 [i_0] [3LL] [3LL] [10U] [10U] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9)))))))) ? ((((_Bool)0) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 2] [i_0])))))));
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)39641)) >= (((/* implicit */int) (unsigned char)78)))))))) ? (((/* implicit */int) arr_7 [i_5])) : (min((((/* implicit */int) ((unsigned char) arr_16 [i_0] [i_0] [i_4] [i_0]))), (((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */int) arr_17 [i_6 - 2] [i_6] [i_5] [i_1] [i_1] [i_0])) : (1167276521)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
