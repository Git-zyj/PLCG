/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150949
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
    for (unsigned short i_0 = 4; i_0 < 18; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_12 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((721272254180873230ULL) / (((/* implicit */unsigned long long int) 4190348581U)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_1)))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_12 [16LL] [16LL] [(unsigned char)8] [(unsigned char)4] [i_0] [i_0] &= ((/* implicit */unsigned int) ((unsigned char) (unsigned char)205));
                            arr_13 [i_0] = ((/* implicit */unsigned int) (((~((+(((/* implicit */int) arr_3 [17U] [17U] [17U])))))) >= (min((((/* implicit */int) arr_7 [(unsigned short)19] [(unsigned short)19] [(unsigned short)12] [i_3])), (((((/* implicit */int) var_11)) | (((/* implicit */int) arr_11 [i_0] [i_2] [i_2] [3LL]))))))));
                            var_13 += ((/* implicit */_Bool) max((((/* implicit */int) ((short) arr_10 [i_0 - 4] [i_0] [i_0 + 1] [i_0] [i_0] [i_0]))), (((((/* implicit */_Bool) arr_10 [7ULL] [i_0] [i_0 + 1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_0 + 2] [i_0] [i_0] [(unsigned short)12])) : (((/* implicit */int) arr_10 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0]))))));
                            arr_14 [i_0] [(_Bool)1] [i_0] [i_3] = ((/* implicit */unsigned char) (~(min((((((/* implicit */int) arr_2 [i_0] [i_2])) | (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_1] [i_3] [i_1])) : (((/* implicit */int) (unsigned short)20417))))))));
                            var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned int) (short)32755))) ? (((long long int) (unsigned short)62013)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)51)) == (((/* implicit */int) (unsigned short)18))))))))))));
                        }
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((arr_3 [i_0] [i_0] [i_0]) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_7 [(unsigned short)6] [i_1] [i_1] [i_0])), (arr_4 [i_0])))))))));
                arr_16 [i_1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */short) ((_Bool) var_4))), (arr_7 [i_0] [i_0] [i_0] [i_1])));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) (unsigned short)65517)));
}
