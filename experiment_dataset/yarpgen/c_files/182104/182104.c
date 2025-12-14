/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -18530;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) ^ ((-((min(18507, (arr_1 [i_0]))))))));
        var_17 = ((((max((min(-8, (arr_1 [i_0]))), 255))) >= ((+(((arr_1 [i_0]) ? 110 : 4))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_18 = -1933719418;
                    var_19 *= 131;
                    arr_7 [i_2] = max((((0 ? (arr_5 [i_0] [i_2] [i_2] [i_0]) : (((arr_5 [i_0] [i_2] [i_2] [i_2]) ? 7362 : 23896))))), ((min(511, -32759))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 4; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        var_20 = ((-(-32767 - 1)));
                        var_21 = ((((arr_15 [i_4] [0] [i_4 + 1]) >= ((3868623196 ? 110 : 1572745529)))) ? ((min((((1 <= (arr_15 [i_4] [i_4 + 1] [i_4])))), (min(-21476, 1))))) : 23887);
                        var_22 = ((((((((13 ? 7718671667802236558 : 12))) ? 1264822966 : (((arr_18 [i_4] [i_5] [i_5]) ? 0 : 56))))) ? (min(((min(-5, 28118))), (-9223372036854775807 - 1))) : (arr_4 [i_6] [i_4 - 4])));
                    }
                }
            }
        }
        arr_21 [i_3] = 504563789623515964;
        var_23 = (-(min((((0 ? 20402 : (arr_12 [i_3] [i_3] [i_3])))), (((arr_16 [i_3] [i_3] [i_3] [i_3]) << (-4 + 35))))));
    }
    #pragma endscop
}
