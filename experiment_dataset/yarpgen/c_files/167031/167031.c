/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_18 |= (max(((min(242, 63))), 5877));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (((min(14854409096670955774, 5893))))));
                                var_20 = max(-2989738917, (((!(~187)))));
                            }
                        }
                    }
                }
                var_21 |= ((+((5981192316530609949 ? (~-1) : (min(5877, -5793535547359967244))))));
                var_22 = 0;

                /* vectorizable */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    var_23 = (~-19926);
                    var_24 = 5207730997708586790;

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        arr_19 [i_0] [i_0] = ((0 ? 5208004504760519258 : -19));
                        var_25 |= -0;
                    }
                }
                var_26 |= (min((min((min(12347925544712156576, 1652588911)), 25)), ((23 ? 11461342125948546711 : -20))));
            }
        }
    }
    var_27 = ((~((25 ? 31 : ((5894 ? 2251662374731776 : 1868675628))))));
    var_28 = (min((!var_17), (~-894359521811592211)));
    var_29 |= ((min((((-16 ? 237 : 5878)), ((752803289 ? 32 : 2199023254528))))));
    #pragma endscop
}
