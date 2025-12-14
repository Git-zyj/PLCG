/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169469
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
    var_17 = (unsigned char)15;
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((18292322281044249288ULL) == (arr_0 [i_0] [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-32754)))))))) : (((/* implicit */int) ((unsigned char) (_Bool)0))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        var_19 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (short)2044)) ? (((((/* implicit */_Bool) -1859174143)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2464))) : (154421792665302328ULL))) : (arr_0 [i_0] [i_0])))));
        var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)20)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15)))))) ? ((+((-(((/* implicit */int) arr_1 [i_0])))))) : ((-(min((((/* implicit */int) arr_1 [1])), (1859174142)))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_21 -= ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_5 [(unsigned char)0])) ? (154421792665302328ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)202))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_1] [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18292322281044249288ULL)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (short)-4598))));
    }
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_10))));
    var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)14385)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)251)))))) : (var_0))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)53)))));
}
