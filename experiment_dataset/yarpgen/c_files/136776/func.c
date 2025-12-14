/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136776
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
    var_19 = ((/* implicit */long long int) -1048576);
    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)11869))));
    var_21 = ((/* implicit */int) var_14);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(min((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_4 [(signed char)14] [i_1] [i_1] [i_2]))))))) ? (((/* implicit */int) (unsigned short)11869)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1140018416U)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [i_2])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) arr_4 [i_0] [i_1] [i_1] [i_2]))))))))));
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1048575))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)53681))) != (arr_2 [i_2] [i_1] [i_0])))), (((((/* implicit */_Bool) 2677268877596471254ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0] [i_1] [i_0])))))) ? (min((arr_0 [i_2]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) / (1538981687309256592LL))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_1] = ((/* implicit */short) (~((-(1048576)))));
                        arr_12 [i_2] &= (-(((((/* implicit */_Bool) min((15769475196113080361ULL), (((/* implicit */unsigned long long int) arr_5 [4U] [i_2] [i_0]))))) ? ((~(((/* implicit */int) arr_4 [i_0] [(unsigned char)12] [i_2] [i_0])))) : ((~(((/* implicit */int) arr_5 [i_0] [i_2] [i_0])))))));
                    }
                }
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [12])) <= (648928601))) ? (((/* implicit */int) arr_9 [i_0] [(_Bool)1] [i_0] [i_0] [i_1])) : (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_0] [i_1] [(unsigned short)10])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_10 [i_0]))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)504))))) ? (arr_2 [i_0] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))))));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0] [i_1]))))) : (max((arr_0 [i_1]), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1] [i_0]))))));
            }
        } 
    } 
}
