/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104834
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
    var_20 = ((/* implicit */short) var_17);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3281940890U)));
                        var_22 = ((/* implicit */_Bool) 472849996U);
                        arr_9 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)23952))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4045001270U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (472849978U)));
                        var_23 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-3))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        for (signed char i_5 = 1; i_5 < 23; i_5 += 2) 
                        {
                            {
                                arr_15 [i_0] [21LL] [(short)13] [21LL] [21LL] [12LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2104895775)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)173))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 773878407U)) ? (-2042724343) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29234))) : (9263340225720692367ULL)))));
                                var_24 = ((/* implicit */long long int) 1597250870870984111ULL);
                                var_25 = ((/* implicit */_Bool) (signed char)28);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
