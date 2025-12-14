/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12011
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
    var_19 += ((/* implicit */int) ((((/* implicit */_Bool) 1148417904979476480ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_17)));
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    var_21 = ((/* implicit */long long int) (+(((int) ((((/* implicit */_Bool) var_0)) ? (-2713201683152736281LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))))))));
                    var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)24)), (var_11)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)24)))))) - (4145480216U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))));
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((((/* implicit */int) var_4)) % (((/* implicit */int) (short)9899)))) * ((~((-(var_0))))))))));
                    arr_9 [i_0 + 2] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-9900))))) || (((((/* implicit */_Bool) (signed char)-37)) || (((/* implicit */_Bool) var_2)))))))));
                }
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    for (unsigned short i_4 = 1; i_4 < 13; i_4 += 1) 
                    {
                        {
                            arr_15 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (unsigned char)24)))) < (((((/* implicit */int) (short)-4721)) | (15872)))));
                            var_24 *= ((/* implicit */int) (short)9899);
                            var_25 = (~(((/* implicit */int) ((unsigned short) var_14))));
                            var_26 = ((/* implicit */int) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_7))))))) ? (((((unsigned int) (unsigned char)64)) & (var_17))) : ((~(min((((/* implicit */unsigned int) (short)-1)), (var_17)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((unsigned int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)229)) ? (788408041U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))));
}
