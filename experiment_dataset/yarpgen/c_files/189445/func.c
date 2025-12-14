/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189445
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
    var_19 = ((/* implicit */_Bool) min((((((((/* implicit */int) var_7)) != (((/* implicit */int) var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (min((((/* implicit */unsigned long long int) (unsigned short)14336)), (137438953472ULL))))), (((/* implicit */unsigned long long int) (-(var_1))))));
    var_20 = ((/* implicit */unsigned int) var_14);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((794383972U) ^ (4157655725U)))) ? (((((/* implicit */_Bool) 3500583324U)) ? (134217727U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)104))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) ? (max((((((/* implicit */_Bool) (signed char)-27)) ? (5856704390166528181ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)123))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-27)) ? (-3804806500913543196LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241)))))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)109)))), ((-(((/* implicit */int) (short)28106)))))))));
        var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_3 [i_0] [i_0])), (arr_2 [i_0])));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min(((-(arr_0 [(short)13] [i_0]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)499))))))))))))));
        arr_5 [(unsigned char)13] [(unsigned char)13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) 1833670262183065828ULL)) ? (min((((/* implicit */long long int) (unsigned char)91)), (0LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 428419445U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [i_0]))))))) : (var_13)));
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_8))));
    }
    for (unsigned char i_1 = 2; i_1 < 23; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
        {
            arr_12 [i_1] = ((/* implicit */unsigned char) (((-(var_18))) >= (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)112)) && (((/* implicit */_Bool) 541755985724367761LL))))))))));
            arr_13 [i_1] [i_1] = ((/* implicit */unsigned int) max((((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) == (var_18)))), (max((4909684731780297806LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (794383972U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))));
            arr_14 [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 3500583323U)), (9007199254740991ULL)));
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_6))));
        }
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
        {
            arr_17 [(short)13] [i_1] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(2736846050U)))), (min((arr_9 [i_1] [i_1 + 1] [i_3]), (arr_9 [i_1] [i_1 - 2] [i_1 - 2])))));
            arr_18 [(unsigned char)16] [i_1] [i_3] = ((((/* implicit */_Bool) (unsigned short)65424)) || (((/* implicit */_Bool) (unsigned char)85)));
        }
        var_25 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) var_14)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [(unsigned char)16])))))))));
        arr_19 [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43181))) : (434524286163794467LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)171))) : (((unsigned int) var_2)))) % (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_0))))), (var_11)))));
        arr_20 [10U] |= ((/* implicit */signed char) ((long long int) arr_10 [i_1] [i_1 - 2]));
    }
    for (unsigned char i_4 = 2; i_4 < 23; i_4 += 3) /* same iter space */
    {
        arr_23 [i_4] [i_4 - 2] |= ((/* implicit */unsigned int) (-(min((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) -434524286163794460LL)) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) (unsigned char)67))))))));
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) var_0))));
        arr_24 [i_4] = ((/* implicit */_Bool) arr_6 [i_4]);
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_4])) ? (((((/* implicit */_Bool) 6929547758394676585LL)) ? (((/* implicit */int) (unsigned short)111)) : (((/* implicit */int) (short)32512)))) : (((/* implicit */int) var_0)))))));
        var_28 = ((/* implicit */long long int) min((var_28), (min((min((((/* implicit */long long int) ((_Bool) (unsigned short)111))), (arr_22 [i_4 - 1]))), (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) 5363423069816493603LL)) ? (2LL) : (((/* implicit */long long int) 3243315435U)))) : (((/* implicit */long long int) 1065353216U))))))));
    }
}
