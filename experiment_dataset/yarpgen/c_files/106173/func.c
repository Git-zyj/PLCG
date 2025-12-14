/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106173
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (max(((unsigned short)0), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) -1753153255)) ? (((/* implicit */int) (unsigned short)33347)) : (((/* implicit */int) (unsigned char)0))))))))));
        var_21 &= ((/* implicit */short) arr_2 [0]);
        var_22 = (-(((/* implicit */int) var_4)));
        arr_3 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 9; i_1 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) arr_2 [(short)10]);
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)46)) || (((/* implicit */_Bool) (short)-6860)))))));
    }
    /* LoopNest 3 */
    for (short i_2 = 1; i_2 < 18; i_2 += 4) 
    {
        for (signed char i_3 = 1; i_3 < 15; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 1753153260))))) < (((/* implicit */int) ((unsigned short) arr_7 [i_3 + 1])))));
                    arr_14 [i_4] [(unsigned char)18] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) 1753153244)), (1942409800U))), (((/* implicit */unsigned int) (~(-1753153262))))));
                    var_26 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) arr_13 [i_3 + 4] [i_3 + 4] [i_2 - 1] [i_2 - 1])))));
                }
            } 
        } 
    } 
}
