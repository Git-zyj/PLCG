/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188788
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
    var_20 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))), (4309205790216084222ULL))), (((/* implicit */unsigned long long int) 3938350865861597547LL))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((var_13) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))))) ? (((/* implicit */long long int) (-((-(((/* implicit */int) var_3))))))) : (var_7)));
    var_22 = ((/* implicit */signed char) (((-(((var_14) / (var_2))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
    var_23 = ((/* implicit */int) 10164707993867204276ULL);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_24 = ((/* implicit */signed char) (unsigned short)41263);
            arr_6 [i_1 + 1] [i_0] = ((/* implicit */unsigned int) (unsigned short)50120);
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) min(((unsigned short)15429), (((/* implicit */unsigned short) (short)-8192))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) - (((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (min((((/* implicit */unsigned int) var_9)), (arr_1 [i_0] [i_1]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_4)))))))));
                        }
                    } 
                } 
            } 
            arr_15 [(signed char)15] [(signed char)15] = ((/* implicit */unsigned short) min((((((/* implicit */int) (unsigned short)17377)) & (-632502289))), (((((/* implicit */int) (short)16352)) ^ (((/* implicit */int) var_6))))));
        }
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                arr_22 [i_0] [i_0] [i_5] [13ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    for (signed char i_8 = 1; i_8 < 21; i_8 += 4) 
                    {
                        {
                            arr_29 [i_8 - 1] = ((/* implicit */_Bool) arr_18 [i_5] [17]);
                            var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_6] [i_5] [i_0]))));
                            var_28 = ((arr_11 [(unsigned short)11] [i_5] [(unsigned short)11] [i_6 - 1] [i_8 + 1]) * (((/* implicit */unsigned long long int) 97851796)));
                            arr_30 [i_0] [i_5] [i_6] [(signed char)14] [i_8] = ((-1644707067177231581LL) | (var_5));
                            var_29 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0]))));
                        }
                    } 
                } 
            }
            for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                var_30 -= ((signed char) var_17);
                var_31 = ((/* implicit */unsigned long long int) ((long long int) -742702826));
                var_32 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (arr_18 [i_9] [(signed char)0])))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((arr_18 [(short)20] [i_0]) + (9223372036854775807LL))) << (((var_16) - (49759454U)))))));
                var_33 = (-(((((/* implicit */_Bool) arr_21 [(_Bool)1] [(_Bool)1] [i_5] [i_0])) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) arr_33 [(signed char)0] [(signed char)0] [(signed char)0])))));
                var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (+(3249095132278895215ULL))))));
            }
            for (long long int i_10 = 0; i_10 < 22; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 22; i_11 += 2) 
                {
                    for (signed char i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        {
                            var_35 ^= ((/* implicit */signed char) (-(((/* implicit */int) arr_34 [i_12] [i_5]))));
                            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 1480905353)) && (((/* implicit */_Bool) (unsigned short)6)))))));
                        }
                    } 
                } 
                var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_37 [i_0] [i_5] [i_0] [i_5]))));
            }
            var_38 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (16123850499933601193ULL)))));
            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)21196)))))));
        }
        for (unsigned int i_13 = 0; i_13 < 22; i_13 += 4) /* same iter space */
        {
            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-20)) ? (16777200) : (-16777200)))))) ? (((/* implicit */long long int) var_14)) : (((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1644707067177231561LL))))))))));
            arr_44 [(short)1] [i_0] = var_5;
            var_41 = ((/* implicit */short) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_33 [i_13] [i_13] [i_0]))))), (((((/* implicit */_Bool) (short)24423)) ? (((/* implicit */unsigned int) -832999859)) : (3551886900U)))));
        }
        /* vectorizable */
        for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) /* same iter space */
        {
            var_42 = ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_17 [i_14])));
            var_43 -= ((/* implicit */_Bool) var_15);
        }
        /* LoopNest 3 */
        for (unsigned char i_15 = 2; i_15 < 21; i_15 += 2) 
        {
            for (int i_16 = 4; i_16 < 20; i_16 += 4) 
            {
                for (unsigned int i_17 = 0; i_17 < 22; i_17 += 4) 
                {
                    {
                        arr_55 [i_0] [i_15] [i_15] [i_16] [i_16] [i_17] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) max(((short)7684), (((/* implicit */short) var_18))))))))));
                        var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)62))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_19)), (var_8)))) : (max((1116892707587883008ULL), (((/* implicit */unsigned long long int) (unsigned short)57344))))));
                    }
                } 
            } 
        } 
        var_45 = min((((((/* implicit */int) ((131064) >= (((/* implicit */int) (signed char)-84))))) - (((/* implicit */int) ((((/* implicit */_Bool) 142989288169013248LL)) && (((/* implicit */_Bool) (signed char)-10))))))), (((/* implicit */int) max(((signed char)30), (var_3)))));
        var_46 = ((/* implicit */int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))) : (var_14))) | (((/* implicit */unsigned int) 2147352576))));
        var_47 = ((signed char) max((((/* implicit */short) arr_47 [i_0] [i_0])), (var_1)));
    }
}
