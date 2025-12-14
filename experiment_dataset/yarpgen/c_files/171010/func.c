/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171010
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
    var_10 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_8)))) - ((+(var_9))))) : (((((/* implicit */_Bool) -1714719267)) ? (1442072314353863684ULL) : (((/* implicit */unsigned long long int) 1714719274))))));
    var_11 = ((/* implicit */unsigned short) (!(((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) % (((/* implicit */int) var_3))))) > (var_8)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) (-(arr_1 [i_0])));
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned short) var_2);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((min((27133433), (-1180197215))) > (((/* implicit */int) (!(((/* implicit */_Bool) 1714719274))))))) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_5 [i_1 - 1]))))));
        arr_7 [i_1] = ((/* implicit */short) min((((/* implicit */int) var_3)), (max((-1714719267), (27133433)))));
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 20; i_2 += 2) 
        {
            var_13 = ((/* implicit */int) max((((/* implicit */short) (signed char)(-127 - 1))), ((short)4658)));
            arr_12 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_10 [i_1] [i_2] [i_2])) & (-27133433)))))) ? (max((((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_2])) ? (arr_5 [i_1 - 1]) : (((/* implicit */unsigned long long int) var_8)))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4)))))));
            arr_13 [(short)13] = (~(arr_3 [i_2]));
            /* LoopNest 3 */
            for (unsigned int i_3 = 3; i_3 < 18; i_3 += 3) 
            {
                for (unsigned char i_4 = 3; i_4 < 18; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        {
                            arr_23 [i_5] [i_5] [i_4] [i_4] [i_2] [i_1 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)60))));
                            var_14 = arr_4 [(signed char)1];
                        }
                    } 
                } 
            } 
        }
    }
}
