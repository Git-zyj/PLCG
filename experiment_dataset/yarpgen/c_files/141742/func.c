/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141742
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_10 = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2] [(_Bool)1] [i_1 - 2] [i_2])) | (((/* implicit */int) (unsigned char)7))));
                        var_11 |= arr_8 [i_1] [i_1] [(_Bool)1] [6];
                        arr_10 [i_0] [i_0] [i_1] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned char)1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21618))) : (14256757720704370203ULL)));
                        arr_11 [i_2] = ((/* implicit */unsigned int) (signed char)108);
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_12 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_3 [i_0])))) < (((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_13 [i_2] [i_1 - 1]))))));
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_2 [i_0] [i_1] [i_4])))) != ((~(((/* implicit */int) (short)-21618))))))) / ((((~(var_3))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_2] [i_0])) || (((/* implicit */_Bool) 10218526734481736282ULL)))))))));
                        var_14 = ((/* implicit */unsigned int) (signed char)-116);
                    }
                    arr_14 [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-109))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) (signed char)-109);
}
