/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138456
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] [9] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
                    var_10 = ((/* implicit */unsigned short) arr_0 [i_0]);
                    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) arr_7 [i_0])))))))) : (min((12592990300437994357ULL), (((/* implicit */unsigned long long int) (unsigned short)19457))))));
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? ((((-(var_3))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)240)))) * (((/* implicit */int) ((unsigned short) (short)31538))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (18424282037065072318ULL))))) ^ (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) var_0)) == (13638206692347001177ULL))) ? (var_0) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)13844)) : (((/* implicit */int) var_5)))))))));
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            var_14 += ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)-2)) : (((/* implicit */int) (_Bool)0))));
            var_15 += ((6162443243621523764ULL) * (max((((4808537381362550456ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [i_3]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18424282037065072318ULL)) ? (((/* implicit */int) arr_10 [5U] [5U])) : (((/* implicit */int) arr_12 [i_3]))))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            arr_20 [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */int) (unsigned short)51677);
            arr_21 [i_3] [i_5] [i_5] = ((((/* implicit */int) var_7)) == (((/* implicit */int) arr_10 [i_3] [i_3])));
        }
    }
}
