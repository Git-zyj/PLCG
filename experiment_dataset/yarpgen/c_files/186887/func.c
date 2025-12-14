/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186887
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 694110948U)) <= (10682789708603898669ULL)));
    var_16 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) 694110948U))))))), (((/* implicit */int) var_7))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */int) ((var_3) < (var_9)))) | (((/* implicit */int) (unsigned short)25640))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_0 + 1]))));
        var_19 |= ((/* implicit */unsigned int) ((unsigned short) (unsigned short)25640));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        arr_6 [12U] = ((/* implicit */unsigned char) arr_1 [i_1] [i_1]);
        var_20 &= ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_0 [i_1]))))));
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) + (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)5)) / (((/* implicit */int) (short)-7847))))) == (9223372036854775807LL)))))))));
        var_22 = ((/* implicit */long long int) (~(min((((/* implicit */int) max(((unsigned char)233), ((unsigned char)185)))), (((((/* implicit */int) (short)32767)) | (((/* implicit */int) (short)0))))))));
        var_23 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2]))))), ((+(((/* implicit */int) ((arr_7 [11ULL]) >= (((/* implicit */unsigned long long int) 4194303U)))))))));
        var_24 = (~(((arr_5 [i_2]) >> (((263059864395692142ULL) - (263059864395692113ULL))))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) (short)19602);
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) max(((+(3826793977047285168LL))), (((/* implicit */long long int) (~(2U))))))) <= (arr_12 [i_2] [i_3] [(short)10]))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            {
                arr_20 [i_6] = ((/* implicit */unsigned long long int) 2173701263U);
                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(1036467083U)))) && (((/* implicit */_Bool) 2216715785964296302ULL))));
            }
        } 
    } 
}
