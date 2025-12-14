/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184882
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
    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) min((max((var_0), (((/* implicit */long long int) var_1)))), (((((/* implicit */_Bool) (signed char)-32)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((~(((((/* implicit */_Bool) (short)5097)) ? (11930188827641828578ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) var_8);
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max((var_5), (((/* implicit */long long int) var_1)))) / (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
            arr_6 [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) 12454820486291484054ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) > (var_13))))) : (var_12))));
            arr_7 [i_0] [(signed char)5] [i_0] = ((/* implicit */short) arr_3 [i_0] [i_1]);
            arr_8 [i_0] = var_10;
        }
        for (signed char i_2 = 2; i_2 < 15; i_2 += 3) /* same iter space */
        {
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) min(((unsigned short)39437), (((/* implicit */unsigned short) (_Bool)1))))), (var_12)))));
            arr_13 [i_0] [i_0] [i_0] = var_8;
        }
        for (signed char i_3 = 2; i_3 < 15; i_3 += 3) /* same iter space */
        {
            arr_17 [10ULL] [i_0 - 1] [i_0] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) (unsigned short)9050))))));
            arr_18 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) var_10)), (-661326618)));
            arr_19 [i_0] = max((min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_10))))))));
            arr_20 [i_0] [i_3] [i_3] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_12))), (((/* implicit */unsigned long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_14 [i_0]))))))))));
        }
        for (short i_4 = 1; i_4 < 13; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                {
                    {
                        arr_27 [i_0] [i_0] = ((/* implicit */short) var_0);
                        arr_28 [i_0] [i_0] [i_5] [i_5] [(signed char)4] [14U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)26129)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) (unsigned short)23641))));
                        arr_29 [i_0] [i_4 - 1] [i_0] [i_6] = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? ((+(var_13))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [(unsigned char)2] [i_4] [i_4 + 3] [i_4] [i_6])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) : (min((min((((/* implicit */unsigned long long int) var_6)), (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_7))))))));
                        arr_30 [i_0] [i_0] [i_5] [i_0] = var_2;
                    }
                } 
            } 
            arr_31 [i_0] [i_4] = ((/* implicit */_Bool) max(((((!(((/* implicit */_Bool) 11370309858600628737ULL)))) ? (min((((/* implicit */long long int) (unsigned short)9050)), (0LL))) : (((/* implicit */long long int) (-(var_1)))))), (((/* implicit */long long int) var_3))));
        }
    }
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) 7566364976613034847ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)16128))) : (-3699752448706766226LL)));
    var_17 = (+((+((-(((/* implicit */int) (_Bool)1)))))));
}
