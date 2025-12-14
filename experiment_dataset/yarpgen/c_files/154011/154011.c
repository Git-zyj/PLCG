/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    var_14 -= (~11435012480132658769);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [22] &= (((((7011731593576892859 ? (arr_1 [22]) : 11952811616576393625))) ? 7011731593576892843 : (max(7011731593576892853, (arr_4 [i_0 - 2] [24])))));
                var_15 = (((((((arr_3 [18] [i_1]) ? var_4 : var_2)) << ((((16383 ? var_12 : 21068)) - 1910011941)))) + (((max(1, 2055315199))))));
                var_16 = (max(var_16, (((((arr_1 [2]) ? (arr_1 [6]) : 62)) - (((arr_1 [16]) ? 1617114373 : (arr_1 [12])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_17 = (min(var_17, ((((min(50528, 25140)) == ((8928 << (11435012480132658757 - 11435012480132658755))))))));
                            arr_17 [i_2] = (((((arr_10 [i_2] [i_2] [i_2]) ? (((7011731593576892849 ? 4294967289 : 65535))) : (((arr_10 [i_2] [i_3] [i_2]) + (arr_13 [i_2]))))) << (((8913 & 13955) ? (((44489 == (arr_4 [i_2] [i_2])))) : (((arr_15 [i_2]) ? 1 : (arr_4 [i_2] [i_2])))))));
                        }
                    }
                }
                var_18 ^= ((-((153 ? 9988191084365219304 : 18310925148554083683))));
            }
        }
    }
    #pragma endscop
}
