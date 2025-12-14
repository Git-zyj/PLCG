/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169990
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
    var_16 += ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [(unsigned char)8]);
                var_18 |= ((/* implicit */_Bool) min((((((/* implicit */int) arr_3 [i_1] [i_1] [i_0])) >> (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))), (((/* implicit */int) ((max((((/* implicit */int) var_15)), (var_8))) < ((+(((/* implicit */int) (signed char)(-127 - 1))))))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    arr_7 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)-29105)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9765112271454833596ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [(_Bool)1]))))) ? (max((arr_6 [i_2] [14ULL] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)20)))))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) min(((signed char)64), ((signed char)-73))))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((unsigned long long int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (16845181122912155145ULL))))));
}
