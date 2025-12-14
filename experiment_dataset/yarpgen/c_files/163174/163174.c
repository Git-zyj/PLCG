/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_8, ((0 ? ((min(36494, 57))) : (~15)))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 -= ((~(max(662122095, 29041))));
                    arr_8 [i_0] [6] |= ((((min(0, (~2834585343967860964)))) ? 39 : (min(((0 ? -662122096 : -108195754)), ((max(-55, 1)))))));
                    var_18 = (min(0, (((!-108195754) ? 9712892434767782688 : (((min(47, 255))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_19 = (((((29 ? 9712892434767782678 : 5907535545010096589))) ? -255 : ((min(1, 227)))));
                                var_20 |= ((((min(15378233238303254502, 2125625527513689564))) ? -4261868193 : (min(4294967295, 28))));
                                arr_14 [i_0] [i_0] = (min(9712892434767782693, 1015808));
                                var_21 = ((((max((!1), (~4294967295)))) ? (max((((16384 ? 3 : 41867))), (min(4194303, 15600)))) : ((min(-662122075, (max(1, -3193799424748972314)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                var_22 = (max(62406, 29066));
                                var_23 *= ((((min((max(1022, -108195778)), 25150))) ? -1257993331 : (min(9223372036854775807, -12760))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
