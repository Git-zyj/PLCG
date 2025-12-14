/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130768
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 7; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 1; i_4 < 9; i_4 += 4) /* same iter space */
                        {
                            arr_15 [i_0] [i_0] [i_2] [i_2] [i_2] [i_3] [i_4 + 1] = ((/* implicit */unsigned char) max((max((max((((/* implicit */unsigned long long int) arr_1 [i_1])), (var_1))), (max((var_1), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min((arr_9 [i_4] [i_3] [i_1] [i_1]), (((/* implicit */short) arr_8 [i_0] [i_3] [i_2]))))), (min((((/* implicit */unsigned int) (short)-1)), (943846553U))))))));
                            var_16 = ((/* implicit */int) max((max((max((943846561U), (((/* implicit */unsigned int) (short)29200)))), (((/* implicit */unsigned int) max((((/* implicit */short) (unsigned char)216)), ((short)-10408)))))), (max((max((((/* implicit */unsigned int) (_Bool)1)), (3351120724U))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) arr_10 [i_2] [i_4 + 1])), (var_10))))))));
                            var_17 += ((/* implicit */signed char) max((((/* implicit */unsigned int) min((max((336700352), (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) max((var_4), ((unsigned char)9))))))), (min((((/* implicit */unsigned int) min(((short)-29203), (((/* implicit */short) arr_13 [i_0] [i_0] [i_1] [(signed char)5] [i_3] [i_4]))))), (max((var_13), (((/* implicit */unsigned int) arr_2 [(_Bool)1] [(_Bool)1]))))))));
                        }
                        for (unsigned short i_5 = 1; i_5 < 9; i_5 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) -188314716)), (max((((/* implicit */unsigned long long int) (signed char)83)), (6272071523646459464ULL))))), (((/* implicit */unsigned long long int) 943846564U))));
                            arr_18 [i_2] [(unsigned char)5] [i_2] [i_3 + 2] [i_5] = ((/* implicit */_Bool) max((max((max((((/* implicit */int) arr_0 [i_0])), (-2147483625))), (((/* implicit */int) min((arr_8 [i_0] [i_0] [i_2]), (var_6)))))), (min((((/* implicit */int) (unsigned char)0)), (-460837783)))));
                            arr_19 [i_0] [i_1] [i_1] [i_2] [i_5 - 1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) min((((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned short) var_10))))), (min((4149783548U), (((/* implicit */unsigned int) (unsigned char)149))))))), (min((min((((/* implicit */long long int) (signed char)8)), (-1393635255421126373LL))), (((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)124)), ((unsigned char)118))))))));
                            var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((max((arr_16 [i_2] [i_1] [i_2] [i_1] [i_2]), (((/* implicit */int) (unsigned short)670)))), (max((-460837792), (((/* implicit */int) (unsigned char)122))))))), (max((min((((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_2] [i_3 + 1] [i_5])), (var_1))), (((/* implicit */unsigned long long int) min((arr_0 [i_0]), (((/* implicit */unsigned short) arr_1 [i_1])))))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */short) max((max((min((((/* implicit */unsigned int) (signed char)16)), (145183775U))), (((/* implicit */unsigned int) min((1312403930), (arr_7 [(unsigned char)0])))))), (((/* implicit */unsigned int) min((min((((/* implicit */short) var_6)), ((short)29205))), (((/* implicit */short) min((var_6), (var_6)))))))));
                            arr_22 [i_6] [i_1] [i_2] [i_3 - 1] [i_6] = ((/* implicit */unsigned int) min((min((max((-341493326), (((/* implicit */int) (unsigned short)60297)))), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)53)), (arr_0 [i_1])))))), (((/* implicit */int) min((max(((short)9432), (((/* implicit */short) var_10)))), (((/* implicit */short) min(((unsigned char)160), (((/* implicit */unsigned char) (_Bool)1))))))))));
                            var_21 = ((/* implicit */unsigned char) max((min((min((var_1), (((/* implicit */unsigned long long int) (short)-29206)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)208)), (var_11)))))), (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) (_Bool)1)), (236355265U))), (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)1)), (var_0)))))))));
                        }
                        var_22 += ((/* implicit */signed char) min((min((min((((/* implicit */unsigned int) arr_14 [(_Bool)1] [i_2] [(_Bool)1] [i_1] [6])), (var_14))), (((/* implicit */unsigned int) min((var_4), (((/* implicit */unsigned char) (signed char)-74))))))), (((/* implicit */unsigned int) min((((/* implicit */int) min(((short)-18616), (((/* implicit */short) var_6))))), (max((((/* implicit */int) (_Bool)1)), (1312403929))))))));
                        var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-36)), (2760919252U)));
                    }
                    arr_23 [i_2] = ((/* implicit */int) max((max((max((((/* implicit */unsigned int) (short)18635)), (1534048029U))), (((/* implicit */unsigned int) min((((/* implicit */int) var_9)), (var_0)))))), (min((min((1970097194U), (((/* implicit */unsigned int) (unsigned char)181)))), (((/* implicit */unsigned int) max((arr_9 [i_0] [(unsigned short)0] [i_2] [i_2]), (((/* implicit */short) arr_4 [i_0])))))))));
                    arr_24 [i_0] [i_2] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)52)), ((unsigned short)65533)))), (max((min((arr_7 [i_0]), (((/* implicit */int) (signed char)-87)))), (((/* implicit */int) max((var_12), ((short)1024))))))));
                }
                arr_25 [i_0] [i_1] = max((max((max((((/* implicit */unsigned int) arr_12 [i_0] [(signed char)1] [i_0] [i_1] [i_1])), (var_13))), (((/* implicit */unsigned int) min((arr_12 [1LL] [i_1] [i_0] [i_0] [i_0]), (((/* implicit */signed char) (_Bool)1))))))), (max((min((((/* implicit */unsigned int) arr_0 [i_0])), (283518987U))), (((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1)))))));
                var_24 = ((/* implicit */unsigned long long int) max((min((min((3975726999337419972LL), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) max((arr_4 [i_0]), ((unsigned char)5)))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) min(((short)-29180), ((short)-29177)))), (min((((/* implicit */unsigned int) var_8)), (1746843594U))))))));
                arr_26 [i_0] [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-81)))), (min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)5238)))))), (min((max((4011448315U), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) max((var_12), (((/* implicit */short) (unsigned char)68)))))))));
            }
        } 
    } 
    var_25 -= ((/* implicit */unsigned char) min((min((max((var_7), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) max(((unsigned short)10), (((/* implicit */unsigned short) (_Bool)1))))))), (((/* implicit */unsigned int) min((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))), (max((((/* implicit */int) var_4)), (-702871393))))))));
}
