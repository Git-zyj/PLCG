/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110710
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
    var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (max((min((-112183722660905518LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)89))))))) : (((/* implicit */long long int) max((min((var_13), (((/* implicit */unsigned int) (unsigned short)65535)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)27))))))))));
    var_21 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65525)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : ((-(var_18))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
    var_22 = ((/* implicit */long long int) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)65535)))))));
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((max((-1792600897767538289LL), (2570805075197928276LL))) >= (((/* implicit */long long int) ((/* implicit */int) max((arr_9 [i_4] [i_3] [i_2] [(short)17]), (arr_9 [i_1] [i_2] [i_3] [i_4]))))))))));
                        var_26 = ((/* implicit */int) max((var_26), (((((((/* implicit */_Bool) (unsigned char)231)) && (((/* implicit */_Bool) arr_2 [i_1])))) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_4 [i_1] [(_Bool)1] [i_4]))) >= (((/* implicit */int) ((unsigned char) var_2))))))))));
                        var_27 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)91))));
                        var_28 -= ((/* implicit */unsigned int) max((((/* implicit */int) var_8)), ((~(((/* implicit */int) var_8))))));
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) max((((/* implicit */int) min((max(((short)-21174), (((/* implicit */short) (unsigned char)24)))), (((/* implicit */short) (unsigned char)240))))), ((+(((/* implicit */int) (unsigned short)26345)))))))));
                    }
                } 
            } 
        } 
        arr_13 [i_1] [i_1] = ((/* implicit */signed char) var_13);
        arr_14 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1385918004703316842LL)) ? (((/* implicit */int) (unsigned short)15580)) : ((+(((/* implicit */int) (unsigned short)6657))))));
        var_30 -= ((/* implicit */unsigned short) min((((((/* implicit */long long int) arr_11 [i_1] [i_1] [i_1] [i_1])) | (171445130854893907LL))), (((/* implicit */long long int) (short)-21174))));
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_5) >> (((((/* implicit */int) (unsigned char)146)) - (138)))))) ? (max((((/* implicit */long long int) (unsigned char)231)), (((((/* implicit */_Bool) -883038538)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_10))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (1664356153U))))))));
    }
}
