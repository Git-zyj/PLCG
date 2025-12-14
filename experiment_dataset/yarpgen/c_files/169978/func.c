/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169978
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
    var_18 = ((/* implicit */int) var_7);
    var_19 = var_8;
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        var_20 -= ((/* implicit */unsigned short) max((((/* implicit */int) ((1198781240U) > (arr_0 [i_0] [i_0])))), ((+(((/* implicit */int) ((unsigned short) 4221915952U)))))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((1198781230U) + (((/* implicit */unsigned int) ((int) 2658777160U)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [(unsigned short)20]);
        var_22 = ((/* implicit */unsigned short) var_2);
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            var_23 += ((/* implicit */signed char) ((((/* implicit */unsigned int) 998687332)) % (max((((/* implicit */unsigned int) ((int) var_8))), (max((arr_0 [i_0] [i_1]), (((/* implicit */unsigned int) 613939237))))))));
            arr_7 [i_1] [i_0] = ((/* implicit */unsigned int) ((long long int) (-(((/* implicit */int) var_15)))));
            arr_8 [i_0] [i_1 - 3] = ((/* implicit */long long int) (signed char)-36);
            arr_9 [14U] [5ULL] [i_0] = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) arr_4 [i_1 - 3] [i_1 + 2])))), ((!(((/* implicit */_Bool) var_1))))));
        }
        for (unsigned long long int i_2 = 4; i_2 < 24; i_2 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 1; i_3 < 23; i_3 += 2) 
            {
                arr_15 [22LL] [i_2 - 4] [i_2] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_2 - 2]);
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (signed char)-99))));
                var_25 = ((int) ((unsigned int) arr_4 [i_3 + 1] [i_2 + 1]));
            }
            for (unsigned int i_4 = 4; i_4 < 23; i_4 += 4) 
            {
                arr_18 [20U] [i_2 - 4] [20U] = ((/* implicit */signed char) arr_13 [i_0] [i_0] [i_0] [i_4 - 1]);
                arr_19 [i_0] [i_2] = ((/* implicit */unsigned int) arr_12 [i_2] [i_2 - 2]);
            }
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) -1160233264728940090LL)) ? (min((((((/* implicit */_Bool) var_14)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */long long int) 42927869U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)61)) ? (2105463349U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)36)))))))) : (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_10 [i_2 - 4])) != (((/* implicit */int) var_7))))))))));
        }
        for (signed char i_5 = 3; i_5 < 24; i_5 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_6 = 3; i_6 < 22; i_6 += 2) 
            {
                for (signed char i_7 = 4; i_7 < 22; i_7 += 3) 
                {
                    for (unsigned int i_8 = 2; i_8 < 24; i_8 += 4) 
                    {
                        {
                            arr_33 [i_5] = max((((/* implicit */long long int) ((((/* implicit */_Bool) -4611686018427387904LL)) ? (max((((/* implicit */unsigned int) arr_27 [i_5] [i_5])), (2489661589U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_8] [i_6] [7U] [7U])))))))), (((long long int) 1357367890U)));
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3096186067U)) && (((/* implicit */_Bool) -6688381385605966962LL))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */int) (-(((long long int) ((2658777160U) < (var_1))))));
            arr_34 [i_5] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */int) (unsigned short)8379)) == (arr_5 [i_0] [i_0] [i_0])))) < (((/* implicit */int) ((-5989248919308932680LL) == (((/* implicit */long long int) 1005070279))))))) ? (max((((arr_29 [i_0] [i_0] [i_0] [i_5]) - (((/* implicit */unsigned long long int) arr_13 [i_5] [i_5] [4] [i_5 + 1])))), (max((((/* implicit */unsigned long long int) arr_24 [(unsigned short)6] [i_5] [i_5] [(signed char)18])), (var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_32 [i_0] [20U] [i_0])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) != (((/* implicit */long long int) 2713211185U))))))));
            arr_35 [i_5] = 444687050U;
        }
    }
    for (signed char i_9 = 0; i_9 < 25; i_9 += 2) /* same iter space */
    {
        arr_40 [i_9] = ((/* implicit */signed char) ((14410530521749336595ULL) == (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_26 [i_9] [i_9]))))), (32768U))))));
        var_29 = ((/* implicit */int) max((((/* implicit */unsigned int) ((signed char) arr_31 [i_9] [i_9] [(unsigned short)14]))), (((arr_31 [7ULL] [7ULL] [i_9]) >> (((arr_31 [i_9] [i_9] [i_9]) - (3501425656U)))))));
    }
    for (signed char i_10 = 0; i_10 < 25; i_10 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned short i_11 = 2; i_11 < 22; i_11 += 4) 
        {
            arr_48 [i_11 - 2] [i_11 - 2] [(signed char)22] = ((/* implicit */signed char) (+((((-(((/* implicit */int) arr_37 [i_10] [i_10])))) + (((/* implicit */int) ((unsigned short) arr_32 [i_10] [i_10] [i_11])))))));
            /* LoopNest 2 */
            for (unsigned int i_12 = 2; i_12 < 24; i_12 += 2) 
            {
                for (unsigned long long int i_13 = 2; i_13 < 23; i_13 += 3) 
                {
                    {
                        var_30 = ((/* implicit */int) min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_12] [i_11]))) & (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))) > (10893273294779484139ULL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)67)) & (((/* implicit */int) (unsigned short)41579)))))));
                        arr_55 [i_10] [i_11 + 3] [i_12 + 1] [i_13] = ((/* implicit */long long int) 5737740715839351279ULL);
                        var_31 ^= ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_17 [i_11] [i_12 - 2] [i_11 + 2] [i_13 + 2]))))));
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_11] [i_11 - 1])) ? (arr_39 [i_11]) : (((/* implicit */unsigned int) -2051579425))))) || (((1198781230U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-126)))))))) >> (((((min((((/* implicit */unsigned long long int) (signed char)37)), (4036213551960215021ULL))) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_10] [i_10]))))))) - (18446744073708975534ULL)))));
            var_33 = ((/* implicit */long long int) ((signed char) (((~(439561470711028011LL))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_11] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_10] [i_10]))) : (var_16)))))));
        }
        /* vectorizable */
        for (unsigned int i_14 = 0; i_14 < 25; i_14 += 4) 
        {
            var_34 -= ((/* implicit */unsigned int) arr_11 [i_10] [i_10] [i_10]);
            var_35 &= ((/* implicit */unsigned int) arr_36 [6] [i_14]);
            var_36 = ((/* implicit */signed char) 14106833083195116019ULL);
            var_37 &= ((/* implicit */signed char) ((4611686018427387904LL) ^ (((/* implicit */long long int) 256))));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 25; i_15 += 4) 
        {
            var_38 -= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 14410530521749336585ULL)))) != (((((/* implicit */_Bool) var_8)) ? (var_16) : (520093696U)))));
            arr_62 [i_10] = ((/* implicit */long long int) 520093696U);
            arr_63 [i_15] [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)36))) : (998223057147729176LL)));
            /* LoopNest 3 */
            for (signed char i_16 = 0; i_16 < 25; i_16 += 4) 
            {
                for (unsigned int i_17 = 0; i_17 < 25; i_17 += 4) 
                {
                    for (signed char i_18 = 1; i_18 < 22; i_18 += 4) 
                    {
                        {
                            arr_72 [i_10] [i_15] [i_15] [i_17] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_65 [i_10] [i_17] [i_18 - 1])) ? (-800611124) : (((/* implicit */int) ((((/* implicit */_Bool) 3806791420585514613ULL)) || (((/* implicit */_Bool) 2147483647)))))));
                            var_39 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_15] [i_15])) && (((/* implicit */_Bool) (unsigned short)0))))) <= (((((/* implicit */int) (unsigned short)32512)) >> (((3806791420585514609ULL) - (3806791420585514603ULL)))))));
                        }
                    } 
                } 
            } 
            var_40 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)38766))));
        }
        for (unsigned int i_19 = 0; i_19 < 25; i_19 += 4) 
        {
            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)97))) : (520093696U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27558))) : (((((/* implicit */unsigned long long int) 788708407U)) + (arr_3 [i_10] [i_10])))));
            arr_75 [i_10] [i_10] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_26 [i_19] [i_10])) ? (((((/* implicit */int) var_7)) / (((/* implicit */int) arr_49 [i_19])))) : (((/* implicit */int) ((arr_27 [i_10] [i_19]) <= (((/* implicit */int) (signed char)-34)))))))));
            var_42 -= ((/* implicit */unsigned int) max((131056LL), (((/* implicit */long long int) 998328953U))));
        }
        arr_76 [i_10] &= ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 800931418360283750LL))) || (((/* implicit */_Bool) arr_32 [i_10] [i_10] [i_10])))))));
        var_43 = ((/* implicit */int) arr_26 [i_10] [i_10]);
        var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) ((min((var_14), (((/* implicit */unsigned long long int) (+(var_1)))))) % ((+(((((/* implicit */_Bool) (signed char)90)) ? (var_13) : (((/* implicit */unsigned long long int) 1160233264728940102LL)))))))))));
    }
}
