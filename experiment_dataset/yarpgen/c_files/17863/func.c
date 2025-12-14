/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17863
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */int) var_12)) <= (0)))) <= (((/* implicit */int) ((((/* implicit */int) (short)-19537)) > (2064384)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)150)) % (arr_2 [i_0])))) ? (var_15) : (((/* implicit */int) ((((/* implicit */int) (signed char)-42)) > (((/* implicit */int) (short)19537))))))) : ((~(((/* implicit */int) ((_Bool) var_2)))))));
                        var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) arr_9 [i_1] [i_3])) == ((-2147483647 - 1))))) : ((~(var_2)))))) ? (arr_10 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2]) : (arr_1 [i_1])));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */short) ((unsigned int) var_13));
        var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(signed char)8] [(signed char)8])) ? (arr_10 [i_0 + 1] [i_0] [(signed char)8] [(signed char)8] [i_0 + 1] [i_0 - 1]) : (((/* implicit */int) arr_7 [4] [4]))))) ? (((((/* implicit */_Bool) arr_5 [12] [12])) ? (arr_10 [i_0 - 1] [i_0] [(short)0] [(short)0] [i_0 + 1] [i_0 + 1]) : (((/* implicit */int) arr_7 [(unsigned char)2] [(unsigned char)2])))) : (arr_0 [i_0 - 1])));
        /* LoopNest 2 */
        for (signed char i_4 = 4; i_4 < 12; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                {
                    var_23 = ((/* implicit */int) min((var_23), ((~(((/* implicit */int) ((((/* implicit */int) (short)19536)) <= (((/* implicit */int) arr_6 [i_4] [i_4 - 3] [i_4 - 2])))))))));
                    /* LoopSeq 3 */
                    for (int i_6 = 2; i_6 < 12; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (~((-(((int) (short)-19530)))))))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */int) arr_7 [i_0] [i_0])) ^ (((int) 687148684))));
                    }
                    for (int i_7 = 0; i_7 < 13; i_7 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((arr_1 [i_4]) > (arr_2 [i_0])));
                        arr_20 [i_0] [i_0] = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -687148685)) ? (((/* implicit */int) arr_19 [(_Bool)1] [i_0] [i_0] [(_Bool)1] [i_0 + 1] [i_0])) : (arr_2 [i_0])))))) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */int) arr_7 [i_4 - 1] [i_0])) ^ (((/* implicit */int) arr_7 [i_0 - 1] [i_0])))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        var_27 = ((/* implicit */int) ((((12796216403803850052ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-62))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_15) < (((/* implicit */int) arr_7 [i_0] [i_0]))))))));
                        var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                    }
                }
            } 
        } 
    }
    var_29 = ((/* implicit */signed char) min((var_29), ((signed char)-52)));
    var_30 |= ((/* implicit */unsigned short) (_Bool)1);
    var_31 = ((/* implicit */unsigned long long int) var_17);
    var_32 = ((/* implicit */signed char) max((var_17), (var_2)));
}
