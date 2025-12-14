/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110630
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
    var_13 ^= ((/* implicit */int) var_4);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_14 *= arr_6 [i_0] [i_0];
                        arr_10 [i_0] = (-(6724238230691222352LL));
                        var_15 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) -1720432002)))) ? (((/* implicit */int) ((_Bool) var_1))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (var_3)))))))));
                        /* LoopSeq 3 */
                        for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (+(arr_5 [i_0] [i_2] [i_3 + 2] [(_Bool)1]))))));
                            var_17 += ((/* implicit */unsigned char) ((unsigned short) ((arr_5 [i_3 + 1] [i_3 + 1] [i_3 - 1] [(signed char)16]) - (arr_5 [i_3 + 1] [i_3] [i_3 - 1] [18ULL]))));
                            arr_13 [i_1] [i_2] [i_0] = ((unsigned char) ((((((/* implicit */_Bool) -1292533977)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)1)))) & (0)));
                        }
                        for (int i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            arr_16 [i_0] [i_0] [i_2] = (~(max((((/* implicit */int) (signed char)-117)), (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_9) : (((/* implicit */int) var_4)))))));
                            var_18 *= ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) var_7)) : (var_2)))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) var_5);
                            var_19 = var_8;
                        }
                    }
                } 
            } 
        } 
        var_20 &= ((/* implicit */int) (unsigned short)41371);
        var_21 = ((/* implicit */unsigned short) var_12);
    }
}
