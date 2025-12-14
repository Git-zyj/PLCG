/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (-39 == -8879644630685078814);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
        {
            var_21 = (min(var_21, (((var_2 ? (-39 && -4462165131986536988) : var_4)))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_0] = (!var_1);

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            var_22 = (((var_7 ^ var_12) ^ var_12));
                            var_23 += (~-var_17);
                        }
                    }
                }
            }
            var_24 -= (((-26866 > -4462165131986536988) + var_12));
            var_25 = 37835;
            var_26 ^= ((12273038941272823225 ? (var_4 && var_8) : (~var_4)));
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            var_27 = (min(var_27, ((min(var_2, var_15)))));
            var_28 = (min(var_28, 37835));
            var_29 = ((-((var_19 ? var_12 : -4462165131986536988))));
        }
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            var_30 = (min(var_30, ((min(((max(((64 ? -1675068182077387811 : -37)), -45))), 22)))));
            var_31 = min((max(11669208649489696509, (arr_2 [i_6] [i_6] [i_0]))), ((((var_7 ^ var_15) || var_6))));
        }
        for (int i_7 = 1; i_7 < 17;i_7 += 1)
        {
            arr_20 [18] [12] |= (!-95);

            for (int i_8 = 1; i_8 < 18;i_8 += 1)
            {
                var_32 = (min(var_32, 4462165131986536964));
                var_33 += 7437726044254349059;
                var_34 = (9053015913585453843 ^ -102);

                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    var_35 = ((var_16 ^ ((min((arr_7 [i_0]), 36)))));
                    arr_26 [6] [i_0] = (((((var_17 ? (!var_7) : ((max(var_14, var_14)))))) ? ((55910 ? (((min(var_5, var_13)))) : (113 ^ 15419135356839655907))) : (((min(var_9, (!var_1)))))));
                }
                var_36 = (min(var_36, ((((max((arr_21 [14] [14] [i_8] [i_8 - 1]), (arr_21 [0] [0] [i_8] [i_8])))) ? (max(var_3, (arr_21 [8] [i_8 + 1] [1] [14]))) : (var_9 > var_11)))));
            }
            for (int i_10 = 0; i_10 < 20;i_10 += 1)
            {
                var_37 = 141;
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 20;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 17;i_12 += 1)
                    {
                        {
                            var_38 = ((((((max(var_15, 28))) && (arr_21 [i_0] [i_0] [i_0] [i_0]))) && -13631));
                            var_39 = ((((min((max(var_15, (arr_5 [i_7] [i_0] [i_7]))), var_1))) ? (max(7647, (min(576390383559245824, -73)))) : ((max((arr_24 [i_0] [i_0] [i_10] [i_0]), var_17)))));
                            arr_36 [i_12] [i_0] [i_11] [10] [i_0] [i_0] [i_0] = (((max(2098363492806187886, var_8)) ^ (!var_2)));
                            var_40 |= (-1735343488074688208 && -8595113585343731569);
                        }
                    }
                }
            }

            for (int i_13 = 0; i_13 < 0;i_13 += 1)
            {
                arr_39 [i_0] [i_0] [i_0] = (((((min(-60, (arr_32 [19])))) > var_13)) || ((((((var_13 ? var_6 : var_13))) + (max(var_1, (arr_8 [i_13 + 1] [i_7] [i_13] [i_13])))))));
                var_41 -= var_4;
            }
            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                arr_42 [i_0] = (((((var_14 ? (arr_14 [i_7] [i_14]) : var_5)))) ? (min((min(9223372036854775785, var_19)), (!var_5))) : -8119965284776645233);
                var_42 = ((~((((((var_13 ? var_5 : 3))) || var_12)))));
                var_43 = ((17987658474497957055 ? -19 : 5156744891337194424));
            }
            var_44 = 11009018029455202557;
            var_45 = (min(((min((arr_6 [i_7 + 2] [i_7 + 1] [i_7 + 1] [i_7 + 3]), var_5))), (((((~(arr_1 [i_0])))) ? (min(var_11, 11467256654484405884)) : (var_2 ^ var_7)))));
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 25;i_15 += 1)
    {
        var_46 = ((!(((-5595701427562519129 ? 7437726044254349058 : 0)))));
        /* LoopNest 2 */
        for (int i_16 = 0; i_16 < 25;i_16 += 1)
        {
            for (int i_17 = 3; i_17 < 21;i_17 += 1)
            {
                {
                    var_47 -= (((var_7 > var_18) ^ var_0));
                    arr_50 [i_15] [i_16] [i_17] = (arr_45 [i_15] [i_16]);
                    arr_51 [i_15] [i_17] [i_17] [i_17] = var_0;
                    var_48 &= (93 ^ 189);
                }
            }
        }
        var_49 = var_3;
    }
    var_50 = ((var_9 ? (((~var_15) ? ((max(var_0, var_8))) : ((var_8 ? var_14 : -112)))) : var_3));
    var_51 = (((((~var_19) || var_19)) ? (min(((-86 ? 90 : 247)), 151)) : ((((min(-8305263057226224037, var_0))) ? ((min(var_9, var_11))) : var_17))));
    var_52 = (min((min((((var_4 ? var_17 : var_13))), (max(var_5, 5156744891337194424)))), -var_17));
    #pragma endscop
}
