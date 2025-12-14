/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112654
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
    var_18 = ((/* implicit */short) var_1);
    var_19 = ((/* implicit */int) (+(((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) != (var_17))) ? (((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */unsigned int) 515180281)) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18)))))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */int) arr_6 [i_1] [i_1]);
                        arr_12 [i_1] [i_1] = ((/* implicit */short) max((((unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */int) (unsigned short)32462)) : (((/* implicit */int) (signed char)14))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((arr_0 [i_1] [i_1]), (arr_4 [i_0] [i_1] [i_1])))), (0U))))));
                    }
                    var_21 = ((/* implicit */signed char) arr_5 [i_1]);
                    /* LoopNest 2 */
                    for (signed char i_4 = 2; i_4 < 9; i_4 += 3) 
                    {
                        for (short i_5 = 3; i_5 < 10; i_5 += 4) 
                        {
                            {
                                var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)0)), (839163602043386151LL)))) ? (min(((((_Bool)1) ? (((/* implicit */unsigned long long int) var_14)) : (10024147418477044178ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-62)) - (((/* implicit */int) (signed char)23))))))) : (((/* implicit */unsigned long long int) var_3))));
                                var_23 = ((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_4 - 1] [i_5 - 2]);
                                var_24 -= ((/* implicit */signed char) min((min((0ULL), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_1] [i_4 + 2])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 349089200U)) ? (((/* implicit */int) ((signed char) (signed char)97))) : (((/* implicit */int) var_9)))))));
                                var_25 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1461462357469269260ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-426228611058509121LL)))), (6179155401238433812ULL)));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */short) (+(((/* implicit */int) max((((/* implicit */short) ((12491434163689149901ULL) <= (((/* implicit */unsigned long long int) 2257906471U))))), (max((arr_13 [i_0] [i_1] [i_2 + 3] [i_1]), ((short)-32233))))))));
                }
            } 
        } 
    } 
}
