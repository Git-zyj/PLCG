/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143668
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
    var_11 = ((/* implicit */signed char) var_9);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 2])))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) min(((signed char)-84), (((/* implicit */signed char) var_1))))))), ((+(((/* implicit */int) arr_1 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])))), (((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 2])) | (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))))));
    }
    var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_7)), (var_2)));
    /* LoopNest 3 */
    for (signed char i_1 = 2; i_1 < 23; i_1 += 3) 
    {
        for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                {
                    arr_15 [i_1] [i_1] [i_1] |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) 2620007465808738388ULL)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (signed char)75)))) & (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)77)), ((unsigned short)504))))));
                    arr_16 [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned short)47018)) ? (-5279767470645970816LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1 - 1] [i_1 - 1] [i_1 - 1] [(_Bool)1])))))));
                    arr_17 [i_1] [i_1] [i_2] [13ULL] = ((/* implicit */signed char) (((((_Bool)1) && (((/* implicit */_Bool) 2039095647646999792ULL)))) ? ((~(var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 2]) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [(unsigned short)2])))))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_5);
}
