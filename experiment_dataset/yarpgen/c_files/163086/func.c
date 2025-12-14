/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163086
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
    var_12 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)10)) && (((/* implicit */_Bool) (signed char)-57)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                var_13 = ((/* implicit */short) (+(((((((/* implicit */int) (signed char)-7)) <= (((/* implicit */int) arr_4 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)57)) == (((/* implicit */int) (signed char)81)))))) : (((long long int) 0LL))))));
                /* LoopSeq 3 */
                for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    var_14 = min(((+(((/* implicit */int) (signed char)76)))), ((+(-1947505909))));
                    var_15 -= ((/* implicit */signed char) var_3);
                }
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    var_16 += (~(-1947505909));
                    var_17 = 0LL;
                    var_18 = ((/* implicit */short) (-(min((((long long int) 21LL)), (((/* implicit */long long int) arr_10 [i_4] [i_4 + 1] [10LL] [i_4 + 1] [i_0] [i_4 + 1]))))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [(signed char)23] [i_4] [i_4] [i_4 + 1])) ? ((-2147483647 - 1)) : ((~(min((64512), (((/* implicit */int) arr_9 [i_2] [i_2]))))))));
                }
                for (short i_5 = 1; i_5 < 24; i_5 += 4) 
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_10 [i_5] [i_5] [i_5 + 1] [i_5] [i_5] [i_5]) ? (((/* implicit */int) arr_10 [i_5] [i_5] [i_5 + 1] [i_5] [i_5 + 1] [i_5 - 1])) : (((/* implicit */int) arr_10 [i_5] [i_5] [i_5 - 1] [i_5] [i_5] [17LL]))))) ? (((/* implicit */long long int) ((arr_10 [i_5 + 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5] [i_5]) ? (((/* implicit */int) arr_10 [i_5] [i_5 - 1] [i_5 - 1] [i_5] [i_5] [i_5 - 1])) : (((/* implicit */int) arr_10 [i_5] [i_5] [i_5 + 1] [i_5] [i_5 - 1] [i_5]))))) : (((long long int) (short)16384))));
                    /* LoopSeq 3 */
                    for (long long int i_6 = 3; i_6 < 21; i_6 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */long long int) max((var_21), (((((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)-101)))) * (-1)))) ? (-6680704861505238114LL) : (((/* implicit */long long int) ((/* implicit */int) (!(var_11)))))))));
                        var_22 = ((/* implicit */long long int) -1187203349);
                        var_23 = min((((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (2147483647)))) : (min((((/* implicit */long long int) (signed char)-108)), (-3100654628861631732LL))))), (((/* implicit */long long int) var_11)));
                    }
                    for (long long int i_7 = 3; i_7 < 21; i_7 += 4) /* same iter space */
                    {
                        var_24 -= min((min((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) 0LL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) ((0LL) < (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5 + 1] [i_5 + 1] [i_5] [i_7 + 1] [(_Bool)1] [i_7 - 1])))))));
                        var_25 ^= (~(((/* implicit */int) (_Bool)1)));
                    }
                    /* vectorizable */
                    for (long long int i_8 = 3; i_8 < 21; i_8 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((arr_16 [i_2] [i_2] [i_8] [2] [i_8 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_0))))));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -460341327)) ? (var_8) : (((/* implicit */int) arr_16 [i_0] [i_5] [i_5] [i_5 + 1] [i_5]))));
                        arr_24 [23LL] [i_5] [i_2] [(signed char)2] [i_0] = ((/* implicit */short) ((((long long int) var_9)) % (((/* implicit */long long int) -460341327))));
                    }
                    var_28 = max((((/* implicit */long long int) 824978471)), (8163762622463532775LL));
                }
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    arr_27 [i_0] = ((/* implicit */long long int) arr_13 [i_0] [24LL] [i_2] [i_9]);
                    arr_28 [i_0] [i_1] [i_1] [i_9] = min((var_2), ((signed char)26));
                }
            }
            var_29 ^= ((/* implicit */short) (((~(((/* implicit */int) var_11)))) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [11LL] [i_0] [i_1] [(signed char)2])) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0]))))));
        }
        var_30 = ((/* implicit */short) (+(min((4503599627370464LL), (((/* implicit */long long int) (-2147483647 - 1)))))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_31 ^= ((/* implicit */signed char) min((4503599627370464LL), (((/* implicit */long long int) (signed char)127))));
        var_32 = ((/* implicit */signed char) ((((/* implicit */long long int) (((((_Bool)0) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) (signed char)-21)))) ^ (((/* implicit */int) var_11))))) * (min((((/* implicit */long long int) arr_13 [i_10] [i_10] [i_10] [i_10])), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-76))) / (9223372036854775807LL)))))));
        var_33 += ((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((long long int) 9223372036854775783LL)))) | (((/* implicit */long long int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) -1372253931))))))));
    }
    /* LoopSeq 4 */
    for (long long int i_11 = 0; i_11 < 19; i_11 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_12 = 2; i_12 < 18; i_12 += 4) 
        {
            for (signed char i_13 = 0; i_13 < 19; i_13 += 4) 
            {
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                {
                    {
                        arr_39 [i_14] [(signed char)11] [i_14] [i_14] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((~(var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_22 [i_13] [i_14] [i_14 + 1] [i_14 + 1] [i_14])) : (((/* implicit */int) (_Bool)1)))))));
                        var_34 = ((/* implicit */_Bool) min((var_34), (arr_35 [2] [i_13] [i_12 - 1] [i_11])));
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */_Bool) (-(((arr_23 [i_11]) + (((/* implicit */int) arr_35 [i_11] [i_11] [i_11] [i_11]))))));
        arr_40 [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) (short)16384)) >> (((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (short)28485))) : (-8079614794265683498LL))) - (28466LL)))));
        arr_41 [i_11] [i_11] = ((/* implicit */signed char) min((7696767680721180490LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-28466)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))))));
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_36 = ((/* implicit */signed char) (-2147483647 - 1));
        var_37 = ((/* implicit */signed char) ((0LL) / (((long long int) -828121748))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_16 = 0; i_16 < 18; i_16 += 4) 
        {
            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_11) ? (9223372036854775807LL) : (var_0)))) || ((!(((/* implicit */_Bool) var_5))))));
            arr_46 [i_15] [i_16] [i_16] = ((/* implicit */long long int) arr_7 [i_15] [i_15] [i_15]);
            arr_47 [i_16] [i_16] [i_15] = ((/* implicit */signed char) (-2147483647 - 1));
        }
        var_39 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)124)) ? (((long long int) ((((/* implicit */int) (signed char)-127)) & (((/* implicit */int) var_2))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-1)) : (((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (short)-4600)))))))));
    }
    for (short i_17 = 3; i_17 < 11; i_17 += 4) 
    {
        var_40 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (341720019762203320LL)))) ? (((arr_10 [i_17 - 2] [i_17] [i_17 - 2] [i_17] [i_17 - 2] [i_17 - 3]) ? (arr_43 [i_17 + 1]) : (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) ((min((5595096525357769117LL), (((/* implicit */long long int) (_Bool)1)))) < (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
        arr_52 [i_17] [i_17] = ((((/* implicit */_Bool) ((((-7881539951633693376LL) + (9223372036854775807LL))) >> (((3841390577170899644LL) - (3841390577170899600LL)))))) ? (var_7) : (((/* implicit */long long int) 1937637137)));
        var_41 ^= ((/* implicit */short) ((arr_8 [i_17 + 1] [i_17] [i_17] [i_17] [i_17] [i_17]) ? (((/* implicit */int) var_4)) : (min((((arr_26 [i_17 - 3] [i_17 - 3] [i_17] [i_17 - 2] [i_17]) | (((/* implicit */int) (short)(-32767 - 1))))), ((-(((/* implicit */int) (signed char)95))))))));
        arr_53 [i_17] = ((/* implicit */long long int) min((((/* implicit */int) (short)-28506)), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)28485)) : (((/* implicit */int) (short)3817))))));
        var_42 = ((/* implicit */long long int) var_5);
    }
    for (long long int i_18 = 1; i_18 < 23; i_18 += 2) 
    {
        arr_57 [i_18] = (!(((/* implicit */_Bool) (short)30269)));
        var_43 = min((((/* implicit */short) (signed char)(-127 - 1))), ((short)4037));
        var_44 = ((/* implicit */long long int) max(((~(var_8))), ((-2147483647 - 1))));
        var_45 += ((/* implicit */long long int) max((((/* implicit */short) var_3)), ((short)-4038)));
    }
    var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)4045))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) var_1)) | (7071854503714267536LL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (short)28485))))))));
}
