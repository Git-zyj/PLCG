/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173188
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
    var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)31454))))) ? (((((/* implicit */int) (short)39)) >> (((var_7) - (4541637529551186125ULL))))) : (((/* implicit */int) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15730))))))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) | (-2006449482333612156LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_9)), ((short)-8810))))) : (((10362374056452552150ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (((10186039408707921319ULL) | (((/* implicit */unsigned long long int) arr_2 [i_0])))))) : (((/* implicit */unsigned long long int) ((((arr_2 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)38))))) | (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))))));
        arr_3 [i_0] = -1556001383787311645LL;
        arr_4 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */long long int) arr_1 [i_0]))))) ? (((/* implicit */int) (unsigned short)8280)) : (((((/* implicit */_Bool) -548664602)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))))), (arr_1 [i_0])));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-60))))), (((/* implicit */long long int) ((unsigned int) arr_2 [i_0])))));
        arr_6 [(unsigned char)2] [(unsigned char)2] |= ((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((((((/* implicit */long long int) arr_1 [(unsigned char)10])) >= (arr_2 [(signed char)6]))) || (arr_0 [i_0] [0U])))), ((unsigned short)57256)));
    }
    var_17 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)200)), (var_12)))) || (((((/* implicit */long long int) ((/* implicit */int) var_3))) == (var_0))))))) < (var_0)));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 13796973329479861445ULL)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (max((var_5), (((/* implicit */unsigned int) (_Bool)1))))))));
    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_7)))) ? (min((var_7), (((/* implicit */unsigned long long int) 36211436U)))) : (max((((/* implicit */unsigned long long int) var_6)), (var_7))))))));
}
