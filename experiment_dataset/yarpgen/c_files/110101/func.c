/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110101
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
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_10 += ((((unsigned long long int) 3629282877030616337ULL)) % (((18199341839594669718ULL) / (arr_2 [i_0 - 1]))));
        var_11 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 3629282877030616337ULL)) ? (var_7) : (18446744073709551615ULL))) + (arr_2 [i_0 - 1])))) ? (((8856973844388506961ULL) * (7854434021769914140ULL))) : (((((/* implicit */_Bool) 19ULL)) ? (16416416479162743904ULL) : (15354642197786612817ULL))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_12 = ((/* implicit */unsigned long long int) max((var_12), (8856973844388506968ULL)));
            arr_6 [i_0] [i_1] [17ULL] = ((((((((/* implicit */_Bool) 12772216943256657617ULL)) ? (arr_5 [i_0]) : (10592310051939637506ULL))) == (min((1129607454561200307ULL), (7854434021769914140ULL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0])) || (((/* implicit */_Bool) ((unsigned long long int) var_2))))))) : (((arr_2 [i_0 - 2]) % (((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0 + 2])) ? (13099952706541890047ULL) : (var_6))))));
        }
    }
    for (unsigned long long int i_2 = 3; i_2 < 8; i_2 += 4) 
    {
        arr_9 [i_2 - 2] [i_2 - 2] = ((((/* implicit */_Bool) (-(((unsigned long long int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((15744842988943690028ULL) == (((unsigned long long int) var_6)))))) : (((unsigned long long int) (~(var_1)))));
        var_13 ^= ((((/* implicit */_Bool) (-(8117346138220236974ULL)))) ? (2926786679245814627ULL) : (((var_2) % (((((/* implicit */_Bool) 12627223173451874799ULL)) ? (16786903417600696221ULL) : (7854434021769914140ULL))))));
        arr_10 [10ULL] [10ULL] = max((arr_3 [i_2 - 1]), (((((/* implicit */_Bool) arr_0 [i_2 + 2])) ? (arr_3 [i_2 - 2]) : (arr_3 [i_2 - 1]))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 3; i_5 < 11; i_5 += 3) 
            {
                {
                    var_14 = arr_16 [i_3];
                    var_15 = ((unsigned long long int) ((unsigned long long int) 10329397935489314632ULL));
                    arr_19 [i_3] [10ULL] [10ULL] [i_4] = ((unsigned long long int) ((((/* implicit */_Bool) 10999044191563898613ULL)) ? (((arr_15 [i_3] [i_4]) ^ (var_7))) : (((((/* implicit */_Bool) arr_11 [i_3] [11ULL])) ? (5347320560007904438ULL) : (13777259568941568373ULL)))));
                }
            } 
        } 
    } 
    var_16 = ((unsigned long long int) ((unsigned long long int) ((unsigned long long int) 18446744073709551607ULL)));
}
