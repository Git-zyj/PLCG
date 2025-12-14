/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110262
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((-2007890446505754345LL) | (-8820782071751202291LL))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) -8820782071751202291LL))));
        var_17 = ((/* implicit */int) max((var_17), (((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) -9046179984429403213LL))))), (9046179984429403212LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 950854357)) ? (-9046179984429403213LL) : (-9046179984429403213LL)))) || ((!(((/* implicit */_Bool) 1620460828))))))) : ((+((-(((/* implicit */int) arr_0 [i_0]))))))))));
        var_18 ^= ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)119)) >= (((/* implicit */int) arr_0 [i_0])))))) % (((14886062566724510412ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */unsigned long long int) max((-1620460829), (((/* implicit */int) (unsigned char)184)))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0] = ((/* implicit */unsigned long long int) ((arr_1 [i_0]) <= ((((!(((/* implicit */_Bool) 1620460830)))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-1043814006)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))) - (3064305909709761274LL)))))));
            var_19 = ((/* implicit */int) -4265342496113697868LL);
            var_20 = ((/* implicit */int) 1855700216138515328LL);
        }
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)255)) ? (6158003671767573179LL) : (((/* implicit */long long int) 795073382)))) << (((((/* implicit */int) (_Bool)1)) - (1))))))));
        var_22 = ((/* implicit */long long int) (unsigned char)196);
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            var_23 = ((/* implicit */_Bool) min((var_23), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_3])) ? (17231018125618348410ULL) : (((/* implicit */unsigned long long int) 15)))))))));
            arr_15 [i_2] [i_2] = (~(((((/* implicit */_Bool) arr_10 [4LL])) ? (9144025001692909693LL) : (arr_1 [i_3]))));
        }
        var_24 = ((/* implicit */unsigned char) (!(arr_0 [i_2])));
    }
    for (long long int i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_23 [i_4] [i_5] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9059544215625114214LL))));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8769138337203259173LL)))))) + (arr_22 [i_4] [i_5])));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_26 = (((!((!(((/* implicit */_Bool) 17231018125618348425ULL)))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6] [i_4]))) % (1907390269174880894LL))), (((/* implicit */long long int) ((int) arr_22 [i_4] [i_4])))))) : (((((/* implicit */unsigned long long int) (+(5242538406256630061LL)))) / ((-(5374007074644976423ULL))))));
            arr_27 [i_4] [i_6] = ((((/* implicit */unsigned long long int) (~((~(-671931247)))))) | (((18211358045950394418ULL) | ((~(17231018125618348407ULL))))));
        }
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((-8358878424976152788LL), (((/* implicit */long long int) 1384178175)))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) == (arr_5 [i_4]))))))) ? (((((/* implicit */int) ((_Bool) arr_25 [i_4] [i_4] [i_4]))) << ((((~(-8140957102634127656LL))) - (8140957102634127627LL))))) : (((/* implicit */int) (unsigned char)33))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_7] [i_7])) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9164750972104072498LL)))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (9046179984429403195LL)))))) ? (max((((((/* implicit */unsigned long long int) 999045711982377419LL)) | (arr_30 [i_7] [i_7]))), (arr_30 [i_7] [12LL]))) : (((((/* implicit */_Bool) (-(-269693844)))) ? (((/* implicit */unsigned long long int) (-(-6516287563160838014LL)))) : ((+(arr_28 [i_7] [i_7])))))));
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (unsigned char)102))));
        var_30 = ((/* implicit */int) (unsigned char)245);
        var_31 = ((/* implicit */_Bool) ((((((/* implicit */int) (!(((/* implicit */_Bool) 404168444))))) ^ (((((/* implicit */int) (unsigned char)24)) & (((/* implicit */int) (unsigned char)180)))))) - (((((/* implicit */int) ((1832998539) > (((/* implicit */int) (unsigned char)231))))) - (((/* implicit */int) (!(((/* implicit */_Bool) 16023488222073153500ULL)))))))));
        var_32 -= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((-1384178176) | (((/* implicit */int) (unsigned char)151)))))))));
    }
    var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) var_2))));
}
