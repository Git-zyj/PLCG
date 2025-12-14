/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136026
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
    var_19 = ((/* implicit */short) var_2);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) ((unsigned char) var_6))) & (((/* implicit */int) (_Bool)1)))));
        var_20 = ((/* implicit */unsigned char) (~(7987904232955617744LL)));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                for (int i_3 = 2; i_3 < 18; i_3 += 1) 
                {
                    {
                        var_21 += ((/* implicit */signed char) ((((-7987904232955617765LL) != ((+(4552599492884840654LL))))) ? (max((((((-7987904232955617760LL) + (9223372036854775807LL))) << (((var_18) - (44957100U))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [(_Bool)0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [(_Bool)1])) : (-311782371)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-7987904232955617776LL) : (-7987904232955617745LL))))))))));
                        arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) arr_5 [i_2] [7]);
                        arr_11 [i_0] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_1] [i_0] [i_3])) ? (var_3) : (min((((/* implicit */long long int) arr_5 [i_1] [i_1])), (arr_6 [i_1]))))));
                        arr_12 [i_0] [i_2] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0 - 1]))));
                    }
                } 
            } 
        } 
    }
}
