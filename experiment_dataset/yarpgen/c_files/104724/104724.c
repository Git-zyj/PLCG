/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_9);
    var_11 &= var_2;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] [i_1] = -1;
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_12 = (((((((1578667872 ? 31 : 127)) * ((max(var_1, -1578667873)))))) ? (!-7348604578037973515) : (((((var_0 ? var_6 : var_3))) ? (~239) : (~var_3)))));
                            var_13 &= (max(((((7348604578037973510 ? 3 : 7664740670684626738)) % (((16383 ? 7348604578037973510 : 4231))))), 8589934591));
                        }
                    }
                }
                arr_9 [i_0] [i_0 - 3] = (max((!4294967295), -100));
            }
        }
    }
    var_14 = ((135 ? 4294967295 : 15428629429577204768));

    for (int i_4 = 3; i_4 < 14;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
        {
            arr_15 [i_4] = (!15);
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 11;i_7 += 1)
                {
                    {
                        var_15 += var_0;
                        var_16 = 255;
                        var_17 = (min((min(2251799813685247, var_1)), (((252 ? -1 : var_7)))));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
        {
            var_18 = ((~((-14 ? ((1705396623790315890 ? var_2 : -9)) : var_1))));
            var_19 ^= ((max(-1, -3692206148110002600)));
            var_20 = (min(var_20, var_7));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 13;i_10 += 1)
                {
                    {
                        var_21 -= var_2;
                        var_22 = (max(var_22, (min(6173627607843763629, ((max(-1207652340, 32767)))))));
                        var_23 = -4880410628771274937;

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            var_24 -= -1265350510;
                            var_25 = (~1);
                            arr_33 [i_4] [i_4] [i_9] [i_9] = ((5806658827115247247 ? 81 : var_4));
                        }
                    }
                }
            }
        }
        var_26 = (min((max(1972444370, -333317024)), 43991));

        for (int i_12 = 0; i_12 < 15;i_12 += 1)
        {
            var_27 = 21559;
            var_28 = ((-((var_3 ? 43977 : 1961366863))));
        }
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            var_29 = (min(313836524, 2277770419));
            var_30 = ((max(var_9, 1426749947)));
            var_31 = ((((min(var_9, ((1961366854 ? -333317024 : 6597317219584792505))))) ? ((var_9 ? var_4 : 1)) : (((!((min(-7933835956955979321, 2016357852))))))));
            var_32 = (min(var_32, -1626625801520665935));
        }
        for (int i_14 = 4; i_14 < 14;i_14 += 1)
        {
            var_33 *= 1961366863;
            var_34 = (min(var_34, ((((!1023) ? -1890224 : (!43))))));
            var_35 = 18545;
        }
    }
    for (int i_15 = 0; i_15 < 11;i_15 += 1)
    {
        var_36 = (!var_7);

        /* vectorizable */
        for (int i_16 = 0; i_16 < 11;i_16 += 1)
        {
            var_37 ^= var_9;
            arr_46 [i_15] [i_16] = 8453146938832789381;
            var_38 = (((~-8453146938832789379) ^ 2251799813685247));
            var_39 = var_1;
            var_40 = 17658;
        }
        arr_47 [i_15] [i_15] = ((((max(255, var_6))) ? 143698131 : var_5));
        var_41 -= (min(((max(var_7, var_5))), (~1)));
    }
    #pragma endscop
}
