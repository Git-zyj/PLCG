/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134195
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        var_10 = ((((/* implicit */_Bool) 3377887171U)) ? (1631952085U) : (1674773869U));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((1674773877U) * (13U)));
        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1896525643U)) ? (11U) : (3574202566U)));
        arr_4 [i_0 - 2] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -775907410)) | (127ULL)))) ? (778205520U) : (2147483648U));
    }
    for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) 
    {
        arr_7 [9U] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 37U)) ? (32767U) : (0U)))) ? (((((/* implicit */_Bool) 2336387516U)) ? (7366033661329189104ULL) : (((/* implicit */unsigned long long int) 1064174795U)))) : (((/* implicit */unsigned long long int) (-(91801396U))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((3230792507U) - (13U)))) ? (778205533U) : (((((/* implicit */_Bool) 3516761781U)) ? (2650970223U) : (((/* implicit */unsigned int) 1607882808))))))) : (6174996453057481020ULL)));
        arr_8 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((0ULL) == (((/* implicit */unsigned long long int) 778205521U)))))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            for (unsigned int i_3 = 3; i_3 < 6; i_3 += 3) 
            {
                {
                    arr_14 [i_1] [6U] [i_1] &= ((/* implicit */unsigned int) ((11080710412380362511ULL) >= (((((/* implicit */_Bool) 0U)) ? (min((13232387056526141501ULL), (((/* implicit */unsigned long long int) -827372749)))) : (((/* implicit */unsigned long long int) (+(775907406))))))));
                    arr_15 [i_2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) ((827372769) <= (-827372749))))))), (((((/* implicit */unsigned int) (~(-827372755)))) % (1969362239U)))));
                }
            } 
        } 
    }
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 194278560U)) ? (max((56988595U), (((/* implicit */unsigned int) 2047)))) : (max((1741287567U), (4294967287U)))))) && (((/* implicit */_Bool) var_2))));
}
