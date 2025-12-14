/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147574
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
    var_20 = ((/* implicit */long long int) ((unsigned int) var_5));
    var_21 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (2959193045552179051LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_18)))) : (((/* implicit */int) var_14)))), (((/* implicit */int) var_17))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) arr_4 [(_Bool)1]))));
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_2 [i_0 + 1] [i_0 - 2] [i_0 - 1]))));
            arr_5 [i_0] [(unsigned char)20] [i_1] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) 1903804863)), (4597545385074568222LL))))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_24 = ((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_6 [i_0]) : (arr_6 [i_0]));
                    arr_10 [(short)22] [i_2] [i_0] [i_0] [i_1] [(short)22] = ((/* implicit */long long int) var_11);
                }
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    var_25 -= ((/* implicit */int) var_17);
                    var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_3 [i_0 - 1] [i_0 - 1] [i_2])), ((-(-2959193045552179060LL)))))), ((+((-(var_4))))))))));
                }
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    arr_15 [i_0 - 2] [i_1] [i_1] [i_2] [i_0] [i_1] = (+(((/* implicit */int) var_9)));
                    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [(signed char)20] [i_1]))) : (((((((/* implicit */_Bool) (-2147483647 - 1))) ? (3864317103601519168LL) : (-2959193045552179063LL))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_5] [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)0))))))))))));
                }
                arr_16 [7] [7] [i_0] = ((/* implicit */_Bool) var_5);
                arr_17 [(_Bool)1] [i_1] [i_1] [(signed char)10] &= ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (18446744073709551597ULL)));
                arr_18 [i_2] [i_0 - 3] [i_2] [i_0] = ((/* implicit */_Bool) (~((+(max((((/* implicit */unsigned long long int) var_0)), (arr_0 [(unsigned short)15] [8LL])))))));
            }
            for (unsigned char i_6 = 3; i_6 < 20; i_6 += 3) 
            {
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) arr_2 [i_6 + 4] [i_0 - 2] [i_6 - 1])) ? (arr_2 [i_6 + 1] [i_0 + 1] [i_0]) : (arr_2 [i_6 - 1] [i_0 - 2] [i_6 + 3]))))))));
                var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) min((arr_11 [i_0] [2LL] [2LL]), (((((/* implicit */int) (unsigned char)249)) > (((/* implicit */int) var_13))))))))))));
                /* LoopSeq 2 */
                for (unsigned short i_7 = 3; i_7 < 23; i_7 += 3) 
                {
                    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2959193045552179060LL))))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_3 [i_0] [i_6] [i_7])) : (arr_7 [i_0] [i_1] [i_6 - 1] [i_7])))))) ? (((((((/* implicit */_Bool) (unsigned char)16)) || (((/* implicit */_Bool) 2959193045552179051LL)))) ? (((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)110))) : (2959193045552179062LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)-1))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_14))))), (((((/* implicit */_Bool) 3801953730139971353ULL)) ? (2959193045552179072LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [4ULL]))))))))))));
                    var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned short)31)), (10383119491399482982ULL))))));
                    arr_23 [(_Bool)1] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_6] [i_1] [i_1] [i_7] [i_7 - 3] [i_0])) * (min((2147483631), (((/* implicit */int) (short)1))))))), (min((16400438498361535918ULL), (((/* implicit */unsigned long long int) (unsigned short)9))))));
                }
                for (unsigned char i_8 = 2; i_8 < 20; i_8 += 3) 
                {
                    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)239)), (2959193045552179063LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_6] [i_1] [i_1] [i_1])) ? (-2959193045552179045LL) : (var_12)))) : (arr_0 [i_8 - 2] [i_8 - 2])))))))));
                    var_33 ^= (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)26888)) : (1912586593))));
                }
            }
        }
        for (int i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) 10383119491399483002ULL))));
            arr_29 [14] [14] |= ((/* implicit */short) var_13);
            arr_30 [i_9] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) var_9);
        }
        /* LoopSeq 1 */
        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) 
        {
            var_35 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_1 [i_0 - 3] [i_0]), (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_10] [i_10])))) ? (min((((/* implicit */unsigned long long int) var_0)), (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)42)))))))))));
            var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) arr_21 [i_0 - 3] [i_0 - 3] [4U] [i_0 - 2] [i_10]))));
            arr_35 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10))) * (min((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) >> (((/* implicit */int) (_Bool)0))))), (4294967295U)))));
            var_37 |= ((/* implicit */unsigned char) ((((int) arr_7 [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0 + 1])) & (((/* implicit */int) ((((/* implicit */long long int) 2147483647)) != (-2959193045552179041LL))))));
        }
        arr_36 [i_0] [i_0] = ((/* implicit */unsigned short) max(((+((~(((/* implicit */int) arr_24 [i_0] [11U] [i_0] [i_0] [i_0])))))), (((/* implicit */int) var_7))));
    }
    var_38 = ((((/* implicit */int) (unsigned char)251)) == (((/* implicit */int) (short)-23636)));
}
