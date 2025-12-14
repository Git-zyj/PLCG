/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156418
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
    var_20 = ((/* implicit */unsigned char) min(((((((_Bool)1) || (((/* implicit */_Bool) 2934389080319110033ULL)))) ? (((/* implicit */int) ((2147483646) >= (((/* implicit */int) (unsigned char)252))))) : ((+(((/* implicit */int) var_2)))))), (max((((/* implicit */int) (!(var_19)))), (max((((/* implicit */int) var_5)), (var_8)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                var_21 *= ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) min((var_9), ((_Bool)1)))) > (((/* implicit */int) ((((/* implicit */_Bool) 2147483646)) || (var_7))))))), (673582413)));
                arr_5 [i_0] [i_0] [(unsigned char)7] = ((/* implicit */_Bool) -2147483646);
                var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((673582422) & (((/* implicit */int) (unsigned char)218)))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */int) 3ULL);
        arr_10 [i_2] = ((/* implicit */unsigned long long int) arr_6 [i_2]);
        arr_11 [i_2 + 1] = ((/* implicit */int) min((max((((((/* implicit */_Bool) arr_6 [i_2])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))), (((/* implicit */unsigned int) arr_6 [i_2]))));
        var_23 += ((/* implicit */unsigned int) arr_6 [i_2]);
        var_24 *= ((/* implicit */unsigned long long int) arr_6 [i_2]);
    }
    for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 4) 
    {
        arr_14 [i_3] = ((/* implicit */int) arr_6 [i_3]);
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((min((3U), (((/* implicit */unsigned int) arr_13 [i_3] [i_3])))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) || (((/* implicit */_Bool) max((3365377100U), (((/* implicit */unsigned int) (-2147483647 - 1)))))))))));
            arr_18 [i_3 - 2] [i_3 - 2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 1242577802)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) 1242577792)))) > (((/* implicit */unsigned long long int) max(((~(1297938637))), (((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? (((/* implicit */int) (short)-3997)) : (((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1] [i_4])))))))));
            arr_19 [i_3] [i_3] = arr_4 [i_3] [i_4] [i_4];
            var_26 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)31)) >> (((16432755604095591572ULL) - (16432755604095591557ULL))))))))), ((unsigned char)181)));
        }
        var_27 = ((/* implicit */unsigned char) arr_16 [i_3]);
        var_28 = arr_3 [(short)6] [i_3] [(short)6];
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_2 [i_5])), (((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)81))) : (31U)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)81)) ? (((arr_0 [i_5]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_13)) * (((/* implicit */int) arr_6 [i_5])))))))));
        var_30 += ((/* implicit */unsigned int) (unsigned char)32);
        var_31 *= ((/* implicit */unsigned char) var_15);
        var_32 += ((/* implicit */_Bool) max((-24), (((/* implicit */int) (unsigned char)250))));
        var_33 += ((/* implicit */unsigned long long int) (_Bool)1);
    }
    var_34 = ((/* implicit */short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_11)), (var_15))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14)))))))) ? (((max((((/* implicit */unsigned long long int) (_Bool)1)), (2305843009213693951ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) || ((!((_Bool)1)))))))));
}
